#pragma once
#include <memory>
#include <renderer\i_renderer.h>

namespace Codex
{
  class VulkanRendererImpl;

  class VulkanRenderer : public IRenderer
  {
  public:
    VulkanRenderer();
    ~VulkanRenderer();
    VulkanRenderer(const VulkanRenderer &other) = delete;
    VulkanRenderer(VulkanRenderer &&other) = delete;
    VulkanRenderer &operator= (const VulkanRenderer &other) = delete;
    VulkanRenderer &operator= (VulkanRenderer &&other) = delete;

  private:
    std::unique_ptr<VulkanRendererImpl> impl;
  };
}