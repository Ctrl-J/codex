#pragma once
#include <memory>

#include <i_configuration.h>

namespace Codex
{
  class WindowManagerImpl;

  class WindowManager
  {
  public:
    WindowManager(std::shared_ptr<IConfiguration> configuration);
    ~WindowManager();

    WindowManager(const WindowManager &other) = delete;
    WindowManager(WindowManager &&other) = delete;
    WindowManager &operator= (const WindowManager &other) = delete;
    WindowManager &operator= (WindowManager &&other) = delete;

  private:
    std::unique_ptr<WindowManagerImpl> impl;
  };
}