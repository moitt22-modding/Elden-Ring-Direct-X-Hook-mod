/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace er {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 *
 */
struct fe_text_effect_param_st {
    /**
     * @brief Resource ID
     *
     * Instance name of the menu resource. ID of TextEffect_X
     */
    short resId{0};

    unsigned char pad1[2];

    /**
     * @brief Text ID
     *
     * Text ID to display (-1: No text). MenuText
     */
    int textId{-1};

    /**
     * @brief SE ID
     *
     * Voice ID to play (-1: No SE)
     */
    int seId{-1};

    /**
     * @brief Whether to display at the same time as the map name
     */
    bool canMixMapName : 1 {false};

    unsigned char pad3 : 7;

    unsigned char pad2[19];
};

};
};

static_assert(sizeof(er::paramdef::fe_text_effect_param_st) == 32,
              "FE_TEXT_EFFECT_PARAM_ST paramdef size does not match detected size");
