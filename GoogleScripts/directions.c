#include <stdio.h>
#include <stdlib.h>

#define KB 1024

int main(int argc, char ** argv) {
  char buf[KB];
  char start[KB];
  char dest[KB];

  printf("Starting location: ");
  scanf("%s", start);

  printf("Destination: ");
  scanf("%s", dest);

  snprintf(buf, KB, "open https://www.google.com/maps/dir/%s/%s/", start, dest);
  system(buf);
}
