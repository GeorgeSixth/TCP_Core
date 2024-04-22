#include <string>

namespace TCP_CORE::Utilities::Network {

std::string_view convertIpToString(uint32_t address, char* output = nullptr);
uint32_t convertIpToNumber(const char* address);

} // namespace TCP_CORE::Utilities::Network
