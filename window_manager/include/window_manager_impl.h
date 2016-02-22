#pragma once
#ifdef WIN32
#define WIN32_LEAN_AND_MEAN
#include <Windows.h>
#endif

#include <memory>

#include <i_configuration.h>

namespace Codex
{
  class WindowManagerImpl
  {
  public: 
    WindowManagerImpl(std::shared_ptr<IConfiguration> set_configuration);
    ~WindowManagerImpl();

    WindowManagerImpl(const WindowManagerImpl &other) = delete;
    WindowManagerImpl(WindowManagerImpl &&other) = delete;
    WindowManagerImpl &operator= (const WindowManagerImpl &other) = delete;
    WindowManagerImpl &operator= (WindowManagerImpl &&other) = delete;

  private:
    std::shared_ptr<IConfiguration> configuration;

  };
}
