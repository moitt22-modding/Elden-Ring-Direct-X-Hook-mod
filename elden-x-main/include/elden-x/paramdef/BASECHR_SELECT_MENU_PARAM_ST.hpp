/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace er {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 *
 */
struct basechr_select_menu_param_st {
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
     * @brief Architype ID: Base character
     *
     * Specify the initial parameter ID for each architype for which face para
     * is set.
     */
    unsigned int chrInitParam{0};

    /**
     * @brief Architype ID: Identity
     *
     * Specify the initial parameter ID for each feature archetype
     */
    unsigned int originChrInitParam{0};

    /**
     * @brief Image ID
     *
     * Images lined up on the base character selection screen. Specify the
     * number of frames of resources embedded in Fla
     */
    int imageId{0};

    /**
     * @brief Text ID
     *
     * Occupation name menu text ID
     */
    int textId{0};

    unsigned char reserve[12];
};

};
};

static_assert(sizeof(er::paramdef::basechr_select_menu_param_st) == 32,
              "BASECHR_SELECT_MENU_PARAM_ST paramdef size does not match detected size");
