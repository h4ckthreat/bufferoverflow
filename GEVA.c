#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
   char *addr = getenv(argv[1]);
   printf("Addr of %s: %p (%s)\n", argv[1], addr, addr);
   return 0; 
}

