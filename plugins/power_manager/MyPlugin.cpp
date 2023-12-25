#include "PluginInterface.h"
#include <iostream>

class MyPlugin : public PluginInterface {
public:
  void performTask() { std::cout << "Hello from MyPlugin!" << std::endl; }
};

extern "C" PluginInterface *createPlugin() { return new MyPlugin; }