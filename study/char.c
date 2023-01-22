#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) {
  char* c1 = "test";
  char c2[] = "test";
  char c3[] = { 't', 'e', 's', 't', '\0' };

  char* c4[] = {
    "test1",
    "test2",
  };

  puts(c1);
  puts(c2);
  puts(c3);
  puts(c4[0]);
}

