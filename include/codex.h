#pragma once
#include <string>
#include <iostream>

namespace Codex
{
  class Engine
  {
  public:
    Engine(std::string config_filename);

    void Run();

    int GetCount() const;
    void SetCount(int set_count);
    
  protected:
    int count;
    std::string filename;
  };
}