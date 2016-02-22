#pragma once
#include <string>
#include <iostream>
#include <memory>

#include <i_configuration.h>
#include <renderer/i_renderer.h>
#include <renderer/window_manager.h>

namespace Codex
{
  class Engine
  {
  public:
    Engine(std::shared_ptr<IConfiguration> set_configuration);

    void Run();

  protected:

    std::shared_ptr<WindowManager> windowManager;
    std::shared_ptr<IRenderer> renderer;
    std::shared_ptr<IConfiguration> configuration;
  };
}