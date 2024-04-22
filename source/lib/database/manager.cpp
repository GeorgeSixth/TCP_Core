#include "manager.hpp"

namespace TCP_CORE::Database {
std::shared_ptr<Manager> Manager::getManager() {
    if (instance == nullptr) {
        instance = std::make_shared<Manager>();
    }
    return instance;
}

} // namespace TCP_CORE::Database
