#include <stdio.h>
#include <stdarg.h>

// https://ja.wikibooks.org/wiki/C%E8%A8%80%E8%AA%9E/%E6%A8%99%E6%BA%96%E3%83%A9%E3%82%A4%E3%83%96%E3%83%A9%E3%83%AA/stdio.h
int myfprintf(FILE * stream, const char * format, ...)
{
  va_list ap;
  int ret;
  va_start(ap, format);
  ret=vfprintf(stream, format, ap);
  va_end(ap);
  return ret;
}

int main(int argc, char **argv) {
  myfprintf(stdout, "%d %d %d", 1, 2, 3);
}

