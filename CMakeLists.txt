cmake_minimum_required(VERSION 3.15)
project(PluginDemo)

add_subdirectory(plugin-interface)
add_subdirectory(plugins/power_manager)
add_subdirectory(main-app)
