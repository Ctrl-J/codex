cmake_minimum_required(VERSION 2.8)

set (WINDOW_MANAGER_SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src)
set (WINDOW_MANAGER_INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/include
  CACHE INTERNAL "Renderer: Include Directories" FORCE)

include_directories(${CORE_INCLUDE_DIR})
include_directories(${WINDOW_MANAGER_INCLUDE_DIR})

set(WINDOW_MANAGER_SOURCE_FILES
  ${WINDOW_MANAGER_SOURCE_DIR}/window_manager_impl.cc
)

set(WINDOW_MANAGER_INCLUDE_FILES
  ${WINDOW_MANAGER_INCLUDE_DIR}/window_manager_impl.h
)

add_library(
  WindowManager
  ${WINDOW_MANAGER_SOURCE_FILES}
  ${WINDOW_MANAGER_INCLUDE_FILES}
)
