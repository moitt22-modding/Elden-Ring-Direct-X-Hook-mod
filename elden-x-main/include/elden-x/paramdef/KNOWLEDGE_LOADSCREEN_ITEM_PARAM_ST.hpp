/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace er {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 *
 */
struct knowledge_loadscreen_item_param_st {
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
     * @brief Lifting flag
     *
     * Lifting flag (default: 0). If this event flag is set, the ban will be
     * lifted (displayed on the loading screen). If it is 0, the ban is always
     * lifted. The invalid flag has priority
     */
    unsigned int unlockFlagId{0};

    /**
     * @brief Invalid flag
     *
     * Invalid flag (default: 0). If this event flag is set, it will be disabled
     * (it will not be displayed on the loading screen). If it is 0, this flag
     * is not always set.
     */
    unsigned int invalidFlagId{0};

    /**
     * @brief Text ID
     *
     * Text ID (Loading Text.xlsx). Used for both loading titles and loading
     * text
     */
    int msgId{0};
};

};
};

static_assert(sizeof(er::paramdef::knowledge_loadscreen_item_param_st) == 16,
              "KNOWLEDGE_LOADSCREEN_ITEM_PARAM_ST paramdef size does not match detected "
              "size");
