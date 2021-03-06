cmake_minimum_required(VERSION 2.8)

set (VULKAN_RENDERER_SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src)
set (VULKAN_RENDERER_INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/include
  CACHE INTERNAL "VulkanRenderer: Include Directories" FORCE)

include_directories(${VULKAN_RENDERER_INCLUDE_DIR})

list(APPEND CMAKE_MODULE_PATH ${CMAKE_CURRENT_LIST_DIR}/cmake)
find_package(VulkanSDK REQUIRED)

if(VULKANSDK_FOUND)
  add_definitions(-DUSEVULKANSDK)
  include_directories(${VULKANSDK_INCLUDE_DIR})
  list(APPEND LIBRARIES_OPTIMIZED ${VULKAN_LIB} )
  list(APPEND LIBRARIES_DEBUG ${VULKAN_LIB} )
  list(APPEND PACKAGE_SOURCE_FILES ${VULKANSDK_HEADERS} )
  source_group(OPTIX FILES  ${VULKANSDK_HEADERS} )
else()
  error(FATAL_ERROR "VulkanSDK is required")
endif()

set(VULKAN_RENDERER_SOURCE_FILES
  ${VULKAN_RENDERER_SOURCE_DIR}/vulkan_renderer_impl.cc
)

set(VULKAN_RENDERER_INCLUDE_FILES
  ${VULKAN_RENDERER_INCLUDE_DIR}/vulkan_renderer_impl.h
)

add_library(
  VulkanRenderer
  ${VULKAN_RENDERER_SOURCE_FILES}
  ${VULKAN_RENDERER_INCLUDE_FILES}
)
