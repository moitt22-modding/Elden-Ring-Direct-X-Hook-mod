/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace er {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 *
 */
struct bullet_create_limit_param_st {
    /**
     * @brief Maximum number of bullets in the group
     *
     * Maximum number of creations in the same group
     */
    unsigned char limitNum_byGroup{0};

    /**
     * @brief Is it restricted for each owner?
     */
    bool isLimitEachOwner : 1 {false};

    unsigned char pad2 : 7;

    unsigned char pad[30];
};

};
};

static_assert(sizeof(er::paramdef::bullet_create_limit_param_st) == 32,
              "BULLET_CREATE_LIMIT_PARAM_ST paramdef size does not match detected size");
