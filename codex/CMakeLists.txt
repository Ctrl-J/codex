set (CODEX_SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src)
set (CODEX_INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/include
  CACHE INTERNAL "Codex: Include Directories" FORCE
)

include_directories(${WINDOW_MANAGER_INCLUDE_DIR})
include_directories(${VULKAN_RENDERER_INCLUDE_DIR})
include_directories(${CORE_INCLUDE_DIR})
include_directories(${CODEX_INCLUDE_DIR})

set(RENDERER_SOURCE_FILES
  ${CODEX_SOURCE_DIR}/renderer/vulkan_renderer.cc
  ${CODEX_SOURCE_DIR}/renderer/opengl_renderer.cc
  ${CODEX_SOURCE_DIR}/renderer/window_manager.cc
)

set(RENDERER_INCLUDE_FILES
  ${CODEX_INCLUDE_DIR}/renderer/vulkan_renderer.h
  ${CODEX_INCLUDE_DIR}/renderer/opengl_renderer.h
  ${CODEX_INCLUDE_DIR}/renderer/window_manager.h
)

set(CODEX_SOURCE_FILES
  ${CODEX_SOURCE_DIR}/codex.cc
  ${RENDERER_SOURCE_FILES}
)

set(CODEX_INCLUDE_FILES
  ${CODEX_INCLUDE_DIR}/codex.h
  ${RENDERER_INCLUDE_FILES}
)

add_library(
  ${PROJECT_NAME}
  ${CORE_INCLUDE_FILES}
  ${RENDERER_SOURCE_FILES}
  ${RENDERER_INCLUDE_FILES}
  ${CODEX_SOURCE_FILES}
  ${CODEX_INCLUDE_FILES}
)
