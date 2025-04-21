/* This file was automatically generated from XML paramdefs. */
#pragma once

namespace er {
namespace paramdef {
/**
 * @brief This struct was automatically generated from XML paramdefs.
 *
 */
struct cs_shader_quality_detail {
    /**
     * @brief SSS enabled
     */
    bool sssEnabled{true};

    /**
     * @brief Tessellation enabled
     */
    bool tessellationEnabled{false};

    /**
     * @brief High precision normal effective
     *
     * High precision normal valid (setting the accuracy of the normal stored in
     * G-Buffer)
     */
    bool highPrecisionNormalEnabled{false};

    /**
     * @brief dmy
     */
    char dmy[1];
};

};
};
