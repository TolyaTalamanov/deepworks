#include <fstream>

#include <deepworks/serialization.hpp>
#include <deepworks/model.hpp>
#include <deepworks/layer_info.hpp>

#include "model/model_impl.hpp"

std::ostream& operator<<(std::ostream& os, const deepworks::Attribute& attribute) {
    os << attribute.shape << attribute.type;
    return os;
}

namespace deepworks {

std::ostream& operator<<(std::ostream& os, const deepworks::Model& model) {
    return os;
}

} // namespace deepworks

void deepworks::serialize(const deepworks::Model& model, const std::string& filename) {
    std::ofstream file(filename);
    file << model;
}
