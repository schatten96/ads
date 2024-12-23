set(EXAMPLE example)
add_executable(${EXAMPLE} "main.cpp")
target_link_libraries(${EXAMPLE} PUBLIC core)