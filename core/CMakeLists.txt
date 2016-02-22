cmake_minimum_required(VERSION 3.0.2)

set (CORE_SOURCE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src)
set (CORE_INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/include
  CACHE INTERNAL "Core: Include Directories" FORCE
)

#set(
#  CORE_SOURCE_FILES
#)

set(
  CORE_INCLUDE_FILES
  ${CORE_INCLUDE_DIR}/engine_common.h
  ${CORE_INCLUDE_DIR}/i_configuration.h
  ${CORE_INCLUDE_DIR}/renderer/i_renderer.h
  CACHE INTERNAL "Core: Include Files" FORCE
)
