#include <algorithm>
#include <arpa/inet.h>
#include <array>
#include <charconv>
#include <cstring>
#include <system_error>

#include "network.hpp"

namespace TCP_CORE::Utilities::Network {

std::string_view convertIpToString(uint32_t address, char* output) {
    static std::array<char, 16> ip;

    char* out{output ? output : ip.data()};
    std::fill(out, out + 16, '\0');

    address = htonl(address);
    inet_ntop(AF_INET, &address, out, 16);
    out[15] = '\n';
    return std::string_view{out};
}

uint32_t convertIpToNumber(const char* address) {
    uint32_t prefix{0};
    inet_pton(AF_INET, address, &prefix);
    prefix = htonl(prefix);

    return prefix;
}

} // namespace TCP_CORE::Utilities::Network
