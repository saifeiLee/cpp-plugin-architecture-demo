#include <PluginInterface.h>
#include <dlfcn.h>
#include <iostream>

int main() {
  void *handle = dlopen("../plugins/power_manager/libMyPlugin.so", RTLD_LAZY);
  if (!handle) {
    std::cerr << "Cannot load library: " << dlerror() << '\n';
    return 1;
  }

  typedef PluginInterface *(*CreatePluginFunc)();
  CreatePluginFunc createPlugin =
      (CreatePluginFunc)dlsym(handle, "createPlugin");
  const char *dlsym_error = dlerror();
  if (dlsym_error) {
    std::cerr << "Cannot load symbol create: " << dlsym_error << '\n';
    dlclose(handle);
    return 1;
  }
  PluginInterface *plugin = createPlugin();
  plugin->performTask();
  delete plugin;

  dlclose(handle);
}