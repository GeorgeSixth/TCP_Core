# Add the engine library
file(GLOB_RECURSE TCP_CORE_SOURCES LIST_DIRECTORIES false
    "*.cpp"
    "*.hpp"
)

add_library(TCP_CORE ${TCP_CORE_SOURCES})

# Include directories for the engine library
target_include_directories(TCP_CORE PUBLIC ${CMAKE_CURRENT_SOURCE_DIR} ${VULKAN_SDK_PATH}/include)

if (TCP_CORE_BUILD_TESTS)
    # Locate and link Google Test
    find_package(GTest REQUIRED)
    target_link_libraries(TCP_CORE ${Vulkan_LIBRARIES} GTest::GTest GTest::Main)
    enable_testing()
    add_subdirectory(tests)
else()
    target_link_libraries(TCP_CORE ${Vulkan_LIBRARIES})
endif()
