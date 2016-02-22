#include <renderer/window_manager.h>
#include <window_manager_impl.h>

namespace Codex
{
  WindowManager::WindowManager(std::shared_ptr<IConfiguration> configuration)
  {
    impl = std::make_unique<WindowManagerImpl>(configuration);
  }

  WindowManager::~WindowManager()
  {
  }
}
