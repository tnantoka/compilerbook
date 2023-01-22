#include <stdio.h>
#include <stdlib.h>

// $ gcc strtol.c
// $ ./a.out 1+2+3
// 1
// 2
// 3
int main(int argc, char **argv) {
  char *p = argv[1];

  while (*p) {
    printf("%ld\n", strtol(p, &p, 10));
  }
}

