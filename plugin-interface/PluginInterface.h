#ifndef PLUGIN_INTERFACE_H
#define PLUGIN_INTERFACE_H
class PluginInterface {
public:
  virtual ~PluginInterface() {}
  virtual void performTask() = 0;
};

extern "C" {
PluginInterface *createPlugin();
}
#endif