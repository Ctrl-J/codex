#include <window_manager_impl.h>

namespace Codex
{
  WindowManagerImpl::WindowManagerImpl(std::shared_ptr<IConfiguration> set_configuration)
  {
    configuration = set_configuration;
  }

  WindowManagerImpl::~WindowManagerImpl()
  {
  }
}