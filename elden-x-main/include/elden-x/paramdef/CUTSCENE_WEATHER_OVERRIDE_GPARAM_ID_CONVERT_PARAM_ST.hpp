/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace er {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 *
 */
struct cutscene_weather_override_gparam_id_convert_param_st {
    /**
     * @brief Cutscene Weather Overwrite Gparam Suffix ID
     *
     * The ID of the ?? part of s00_00_0000_WeatherOverride_ ??. Gparam
     */
    unsigned int weatherOverrideGparamId{0};
};

};
};

static_assert(sizeof(er::paramdef::cutscene_weather_override_gparam_id_convert_param_st) == 4,
              "CUTSCENE_WEATHER_OVERRIDE_GPARAM_ID_CONVERT_PARAM_ST paramdef size does "
              "not match detected size");
