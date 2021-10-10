#include "catalan.h"

namespace algorithm {
namespace mathematics {

unsigned int Catalan(unsigned int n) {
  if (n <= 1) return 1;
  unsigned int ret = 0;
  for (unsigned int i = 0; i < n; i++) ret += Catalan(i) * Catalan(n - i - 1);
  return ret;
}

}  // namespace mathematics
}  // namespace algorithm