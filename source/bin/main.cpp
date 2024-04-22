#include <lib/test.hpp>
#include <lib/server/controller.hpp>
#include <lib/utilities/network.hpp>

int main() {
    test::testing_test();

    uint32_t ip{TCP_CORE::Utilities::Network::convertIpToNumber("107.0.0.1")};

    std::cout << ip << std::endl;

    std::string new_ip{TCP_CORE::Utilities::Network::convertIpToString(ip)};

    std::cout <<  new_ip << std::endl;
    TCP_CORE::Server::Controller controller{0, 0, std::string{"test"}};

    return 0;
}
