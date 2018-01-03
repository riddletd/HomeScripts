#include <stdio.h>
#include <stdlib.h>

#define KB 1024

/**
 * A script to google search something.
 * 
 * Warning: Make sure to surround the search text with ''.
 */
int main(int arc, char ** argv) {
  char buf[KB];

  snprintf(buf, KB, "open https://www.google.com/search?q=\"%s\"", argv[1]);
  system(buf);
}
