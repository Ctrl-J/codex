#include <codex.h>

namespace Codex
{
  Engine::Engine(std::string config_filename)
  {
    filename = config_filename;
  }

  void Engine::Run()
  {
    std::cout << filename << std::endl;
  }

  int Engine::GetCount() const
  {
    return count;
  }

  void Engine::SetCount(int set_count)
  {
    count = set_count;
  }
}