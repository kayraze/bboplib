#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include "bboplib.h"


int main(int argc, char * argv[]) {

    char str[15] = "hello";

    for (int i = 0; i < 5; i++) {
        printf("len = %d\n", strlen(str));
        insert_string(str, sizeof(str), "hi", 2);
    }
    printf("%d\n", strlen(str));
    printf("%s\n", str);
    return 0;
}