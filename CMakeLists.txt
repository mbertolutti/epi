add_executable(epi main.cpp)
target_compile_features(epi PRIVATE cxx_std_20)
find_package(fmt REQUIRED)
target_link_libraries(epi PRIVATE fmt::fmt)
