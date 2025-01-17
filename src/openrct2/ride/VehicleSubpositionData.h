/*****************************************************************************
 * Copyright (c) 2014-2020 OpenRCT2 developers
 *
 * For a complete list of all authors, please refer to contributors.md
 * Interested in contributing? Visit https://github.com/OpenRCT2/OpenRCT2
 *
 * OpenRCT2 is licensed under the GNU General Public License version 3.
 *****************************************************************************/

#pragma once

#include "../world/Location.hpp"
#include "Track.h"
#include "Vehicle.h"

#include <cstdint>

constexpr const size_t VehicleTrackSubpositionSizeDefault = TrackElemType::Count * NumOrthogonalDirections;

struct rct_vehicle_info_list
{
    uint16_t size;
    const rct_vehicle_info* info;
};

extern const rct_vehicle_info_list* const* const gTrackVehicleInfo[EnumValue(VehicleTrackSubposition::Count)];
