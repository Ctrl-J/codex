#pragma once

namespace Codex
{
  class VulkanRendererImpl
  {
  public:
    VulkanRendererImpl();
    ~VulkanRendererImpl();
    VulkanRendererImpl(const VulkanRendererImpl &other) = delete;
    VulkanRendererImpl(VulkanRendererImpl &&other) = delete;
    VulkanRendererImpl &operator= (const VulkanRendererImpl &other) = delete;
    VulkanRendererImpl &operator= (VulkanRendererImpl &&other) = delete;
  };
}
