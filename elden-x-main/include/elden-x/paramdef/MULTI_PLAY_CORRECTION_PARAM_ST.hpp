/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace er {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 *
 */
struct multi_play_correction_param_st {
    /**
     * @brief Do you remove it from the NT version output?
     *
     * Parameters marked with ○ are excluded in the NT version package.
     */
    bool disableParam_NT : 1 {false};

    /**
     * @brief Reserve for package output 1
     */
    unsigned char disableParamReserve1 : 7;

    /**
     * @brief Reserve for package output 2
     */
    unsigned char disableParamReserve2[3];

    /**
     * @brief 1 cooperating client Special effect ID
     */
    int client1SpEffectId{-1};

    /**
     * @brief 2 cooperating clients Special effect ID
     */
    int client2SpEffectId{-1};

    /**
     * @brief 3 cooperating clients Special effect ID
     */
    int client3SpEffectId{-1};

    /**
     * @brief Whether to overwrite when the number of cooperating people
     * fluctuates
     */
    bool bOverrideSpEffect{false};

    unsigned char pad3[15];
};

};
};

static_assert(sizeof(er::paramdef::multi_play_correction_param_st) == 32,
              "MULTI_PLAY_CORRECTION_PARAM_ST paramdef size does not match detected "
              "size");
