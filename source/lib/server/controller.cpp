#include "controller.hpp"

namespace TCP_CORE::Server {

    Controller::Controller(const uint32_t& address, const uint16_t& port, const std::string& name) :
        address(address), port(port), name(name) {
    }

    uint32_t Controller::getAddress(void) const noexcept {
        return this->address;
    }

    uint16_t Controller::getPort(void) const noexcept {
        return this->port;
    }

    void Controller::setAddress(const uint32_t& new_address) noexcept {
        this->address = new_address;
    }

    void Controller::setPort(const uint16_t& new_port) noexcept {
        this->port = new_port;
    }
}
