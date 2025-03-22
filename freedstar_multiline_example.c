#if 0 /* This is the bash self-compile code (will never be run by C / C compiler) */
THIS_FILE=$(readlink -f "$0")
BIN_NAME=$(basename "$THIS_FILE" | cut -d. -f1)
sed '1d' "$THIS_FILE" > "/tmp/$BIN_NAME".c # delete line 1
gcc "/tmp/$BIN_NAME".c -o "/tmp/$BIN_NAME" && "/tmp/$BIN_NAME"
exit
#endif

#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    printf("Hello, World!\n");
    return 0;
}

