#pragma once

#include <memory>
#include <string>

#include <lib/connection/acceptor.hpp>
#include <lib/database/manager.hpp>
#include <lib/request/client_data.hpp>

namespace TCP_CORE::Server {

class Controller {
  public:
    Controller(const uint32_t& address, const uint16_t& port, const std::string& name);
    ~Controller() = default;

    uint32_t getAddress(void) const noexcept;
    uint16_t getPort(void) const noexcept;

    void setAddress(const uint32_t&) noexcept;
    void setPort(const uint16_t&) noexcept;

    void start() const {}
    void stop() const {}

  private:
    uint32_t    address{0};
    uint16_t    port{0};
    std::string name{""};

    std::unique_ptr<TCP_CORE::Connection::Acceptor> connections{nullptr};
    std::unique_ptr<TCP_CORE::Request::ClientData>  requests{nullptr};
    std::unique_ptr<TCP_CORE::Database::Manager>    database_manager;
};

} // namespace TCP_CORE::Server
