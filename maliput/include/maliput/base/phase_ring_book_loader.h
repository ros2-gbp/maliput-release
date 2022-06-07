// BSD 3-Clause License
//
// Copyright (c) 2022, Woven Planet. All rights reserved.
// Copyright (c) 2019-2022, Toyota Research Institute. All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are met:
//
// * Redistributions of source code must retain the above copyright notice, this
//   list of conditions and the following disclaimer.
//
// * Redistributions in binary form must reproduce the above copyright notice,
//   this list of conditions and the following disclaimer in the documentation
//   and/or other materials provided with the distribution.
//
// * Neither the name of the copyright holder nor the names of its
//   contributors may be used to endorse or promote products derived from
//   this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
// AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
// DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
// FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
// DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
// SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
// CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
// OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
#pragma once

#include <memory>
#include <string>

#include "maliput/api/rules/phase_ring_book.h"
#include "maliput/api/rules/road_rulebook.h"
#include "maliput/api/rules/traffic_light_book.h"

namespace maliput {

/// Instantiates and returns an api::rules::PhaseRingBook instance based on the
/// specified @p rulebook, and @p input YAML string. Based on old rule API.
///
/// @param rulebook Contains the rules.
///
/// @param traffic_light_book Contains the traffic lights.
///
/// @param input The YAML string which describes the PhaseRings.
///
/// @return The newly created api::rules::PhaseRingBook instance.
std::unique_ptr<api::rules::PhaseRingBook> LoadPhaseRingBookOldRules(
    const api::rules::RoadRulebook* rulebook, const api::rules::TrafficLightBook* traffic_light_book,
    const std::string& input);

/// Instantiates and returns an api::rules::PhaseRingBook instance based on the
/// specified @p rulebook, and @p filename. Based on old rule API.
///
/// @param rulebook Contains the rules.
///
/// @param traffic_light_book Contains the traffic lights.
///
/// @param filename The YAML file that contains a PhaseRings document.
///
/// @return The newly created api::rules::PhaseRingBook instance.
std::unique_ptr<api::rules::PhaseRingBook> LoadPhaseRingBookFromFileOldRules(
    const api::rules::RoadRulebook* rulebook, const api::rules::TrafficLightBook* traffic_light_book,
    const std::string& filename);

/// Instantiates and returns an api::rules::PhaseRingBook instance based on the
/// specified @p rulebook, and @p input document.
///
/// @param rulebook Contains the rules.
///
/// @param traffic_light_book Contains the traffic lights.
///
/// @param input The YAML PhaseRings document.
///
/// @return The newly created api::rules::PhaseRingBook instance.
std::unique_ptr<api::rules::PhaseRingBook> LoadPhaseRingBook(const api::rules::RoadRulebook* rulebook,
                                                             const api::rules::TrafficLightBook* traffic_light_book,
                                                             const std::string& input);

/// Instantiates and returns an api::rules::PhaseRingBook instance based on the
/// specified @p rulebook, and @p filename.
///
/// @param rulebook Contains the rules.
///
/// @param traffic_light_book Contains the traffic lights.
///
/// @param filename The YAML file that contains a PhaseRings document.
///
/// @return The newly created api::rules::PhaseRingBook instance.
std::unique_ptr<api::rules::PhaseRingBook> LoadPhaseRingBookFromFile(
    const api::rules::RoadRulebook* rulebook, const api::rules::TrafficLightBook* traffic_light_book,
    const std::string& filename);

}  // namespace maliput
