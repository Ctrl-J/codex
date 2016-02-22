#include <codex.h>
#include <renderer/vulkan_renderer.h>
#include <renderer/opengl_renderer.h>

namespace Codex
{
  Engine::Engine(std::shared_ptr<IConfiguration> set_configuration)
  {
    configuration = set_configuration;

    // TODO: switch renderer on config
    renderer = std::make_shared<VulkanRenderer>();

    windowManager = std::make_shared<WindowManager>(configuration);
  }

  void Engine::Run()
  {
  }

}