#if 0 /* BOOTSTRAPPER */
  gcc "$0" && "./a.out" # multiline example
  exit
#endif

#include <stdio.h>

int main() {
    printf("Hel!\n");
    printf("Hello, World!\n");
    
    return 0;
}

