#pragma once

#include <memory>
#include <vector>

namespace hnll {

class Variable
{
  public:

  private:
    std::vector<std::shared_ptr<Variable>> children;
};

} // namespace hnll