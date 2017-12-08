
#include "trim.h"

int main(int argc, char const *argv[]) {
  for (int i = 0; i < argc; i++) {
    char trimmed[512];
    trim(argv[i], trimmed);
    printf("%d: %s\n", i + 1, trimmed);
  }
  return 0;
}
