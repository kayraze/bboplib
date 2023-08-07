#define TRUE 1
#define FALSE 0

void lowerstr(char * str) {
    for (int i = 0; i < strlen(str); i++) {
        str[i] = tolower(str[i]);
    }
}

int in_string(char * haystack, char * needle, int is_case_insentive) {
    int j = 0;
    int count = 0;
    for (int i = 0; i < strlen(haystack); i++) {
        if (haystack[i] == needle[j]) {
            count++;
            j++;
        } else {
            count = 0;
            j = 0;
        }
        if (count == strlen(needle)) {
            return TRUE;
        }
    }

    return FALSE;
}