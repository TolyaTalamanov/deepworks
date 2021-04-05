#pragma once

#include <string>

#include <deepworks/model.hpp>

namespace deepworks {

void serialize(const Model& model, const std::string& filename);

} // namespace deepworks
