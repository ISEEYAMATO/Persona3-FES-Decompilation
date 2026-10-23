# PC build scaffold (Phase 7). Not yet functional: shims are stubs.
cmake_minimum_required(VERSION 3.20)
project(persona3fes C)

set(CMAKE_C_STANDARD 11)

# The matched C sources (PS2 build lists them via find src -name '*.c').
file(GLOB_RECURSE GAME_SRCS CONFIGURE_DEPENDS
    "${CMAKE_CURRENT_SOURCE_DIR}/../src/*.c")

# Exclude PS2-only translation units that are replaced by shims.
list(FILTER GAME_SRCS EXCLUDE REGEX ".*/(h_pad|h_snd|h_cdvd|h_memcard|h_fade|h_cursor|h_dbprt|h_sfdply)\\.c$")

add_executable(persona3fes
    ${GAME_SRCS}
    shims/h_pad.c
    shims/shims.c
)

target_include_directories(persona3fes PRIVATE
    "${CMAKE_CURRENT_SOURCE_DIR}/../include"
    "${CMAKE_CURRENT_SOURCE_DIR}/shims"
)

target_compile_definitions(persona3fes PRIVATE PC_BUILD=1)

# TODO: find_package(SDL2), link SDL2, add asset data path.
# find_package(SDL2 REQUIRED)
# target_link_libraries(persona3fes PRIVATE SDL2::SDL2)
