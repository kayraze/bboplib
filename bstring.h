#define TRUE 1
#define FALSE 0

void to_lower_str(char * str) {
    for (int i = 0; i < strlen(str); i++) {
        str[i] = tolower(str[i]);
    }
}

void to_upper_str(char * str) {
    for (int i = 0; i < strlen(str); i++) {
        str[i] = toupper(str[i]);
    }
}

int in_string(char * haystack, char * needle, int is_case_insentive) {
    int j = 0;
    int count = 0;

    char haystack_cp[strlen(haystack) + 1];
    char needle_cp[strlen(needle) + 1];
    strcpy(haystack_cp, haystack);
    strcpy(needle_cp, needle);

    if (is_case_insentive) {
        to_lower_str(haystack_cp);
        to_lower_str(needle_cp);
    }

    for (int i = 0; i < strlen(haystack_cp); i++) {
        if (haystack_cp[i] == needle_cp[j]) {
            count++;
            j++;
        } else {
            count = 0;
            j = 0;
        }
        if (count == strlen(needle_cp)) {
            return TRUE;
        }
    }

    return FALSE;
}