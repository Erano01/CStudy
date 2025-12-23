file(GLOB_RECURSE LIBCORE_SOURCES
    collections/*.c
    error/*.c
    memory/*.c
    string/*.c
)

add_library(LibCore ${LIBCORE_SOURCES})

target_include_directories(LibCore PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/collections
    ${CMAKE_CURRENT_SOURCE_DIR}/error
    ${CMAKE_CURRENT_SOURCE_DIR}/memory
    ${CMAKE_CURRENT_SOURCE_DIR}/string
)