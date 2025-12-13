cmake_minimum_required(VERSION 3.16)
project(h6a LANGUAGES CXX)

set(CMAKE_AUTOMOC ON)
find_package(Qt6 REQUIRED COMPONENTS Core)
add_executable(h6a main.cpp myclass.cpp)

target_link_libraries(h6a Qt6::Core)

include(GNUInstallDirs)
install(TARGETS h6a
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
