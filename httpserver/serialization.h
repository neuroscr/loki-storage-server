#pragma once

#include <string>
#include <vector>

namespace service_node {
namespace storage {
class Item;
}
} // namespace service_node

namespace loki {

class message_t;

std::string serialize_message(const message_t& msg);

/// TODO: reuse the one above
std::string serialize_message(const service_node::storage::Item& msg);

std::vector<message_t> deserialize_messages(const std::string& blob);

} // namespace loki