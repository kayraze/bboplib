#include <stdio.h>
#include <string.h>
#include "bboplib.h"


int main(int argc, char * argv[]) {

    char hay[] = "hello world";
    if (in_string(hay, "H", FALSE)) {
        printf("in string\n");
    } else {
        printf("not in string\n");
    }

    return 0;
}