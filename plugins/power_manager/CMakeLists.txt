add_library(MyPlugin SHARED MyPlugin.cpp)
target_link_libraries(MyPlugin PRIVATE plugin-interface)
