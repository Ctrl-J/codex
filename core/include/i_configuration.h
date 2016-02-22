#pragma once
#include <engine_common.h>
#include <string>

namespace Codex
{
  typedef struct WindowConfigOptions 
  {
    int screen_width;
    int screen_height;
    int dpi;
    int original_window_width;
    int original_window_height;
    float original_window_scale;
    int current_window_width;
    int current_window_height;
    float current_window_scale;
  } WindowConfigOptions;

  class IConfiguration
  {
    DECLARE_INTERFACE(IConfiguration)

  public:
    virtual std::string get_filename() = 0;
    virtual void set_filename(const std::string &target_filename) = 0;

    virtual WindowConfigOptions get_window_options() = 0;
    virtual void set_window_options(const WindowConfigOptions &target_window_options) = 0;

    virtual void reload_configuration() = 0;
  };
}