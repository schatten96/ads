set(CORE_LIB core)
file(GLOB_RECURSE core-sources  ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp
                                ${CMAKE_CURRENT_SOURCE_DIR}/*.hpp
                                )
add_library(${CORE_LIB} ${core-sources})
target_include_directories(${CORE_LIB} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)