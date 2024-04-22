#pragma once

#include <memory>

#include "../server/controller.hpp"

namespace TCP_CORE::Server {
    class Controller; // Forward declaration
}

namespace TCP_CORE::Request {

class ClientData {
    std::shared_ptr<TCP_CORE::Server::Controller> controller{nullptr};
};

} // namespace TCP_CORE::Request
