#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include "bboplib.h"


int main(int argc, char * argv[]) {

    char hay[] = "HELLO WORLD";
    to_lower_str()(hay);
    printf("%s\n", hay);
    if (in_string(hay, "", FALSE)) {
        printf("in string\n");
    } else {
        printf("not in string\n");
    }

    return 0;
}