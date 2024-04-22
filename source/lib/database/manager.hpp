#pragma once

#include <list>
#include <memory>

#include "client.hpp"

namespace TCP_CORE::Server {
    class Controller; // Forward declaration
}

namespace TCP_CORE::Database {

class Manager {
    std::list<std::shared_ptr<TCP_CORE::Database::Client>> clients;
    std::shared_ptr<TCP_CORE::Server::Controller> controller{nullptr};

  protected:
    static std::shared_ptr<Manager> instance;

  public:
    Manager() = default;
    ~Manager() = default;

    // we don't want to duplicate our Database Manager so, we make it into a singleton
    static std::shared_ptr<Manager> getManager();
    Manager(Manager&) = delete;
    void operator=(const Manager&) = delete;
};

} // namespace TCP_CORE::Database
