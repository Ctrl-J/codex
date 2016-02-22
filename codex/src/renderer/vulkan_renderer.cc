#include <renderer\vulkan_renderer.h>
#include <vulkan_renderer_impl.h>

namespace Codex
{
  VulkanRenderer::VulkanRenderer()
  {
    impl = std::make_unique<VulkanRendererImpl>();
  }

  VulkanRenderer::~VulkanRenderer()
  {

  }
}