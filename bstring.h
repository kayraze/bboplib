#define TRUE 1
#define FALSE 0
#define FAILED -1
#define SUCCESS 2

int to_lower_str(char * str) {
    if (strlen(str) <= 0)
        return FAILED;

    for (int i = 0; i < strlen(str); i++) {
        str[i] = tolower(str[i]);
    }
    return SUCCESS;
}

int to_upper_str(char * str) {
    if (strlen(str) <= 0)
        return FAILED;
    
    for (int i = 0; i < strlen(str); i++) {
        str[i] = toupper(str[i]);
    }
    return SUCCESS;
}


int in_string(char * haystack, char * needle, int is_case_insensitive) {
    int j = 0;
    int count = 0;

    for (int i = 0; i < strlen(haystack); i++) {
        if (is_case_insensitive && tolower(haystack[i]) == toupper(needle[j]) ||
            haystack[i] == needle[j]) {
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



















// int insert_string(char * haystack, size_t haystack_size, char * needle, int index) {
//     if (haystack_size < strlen(haystack) + strlen(needle)) {
//         return FAILED;
//     }
//     char old_haystack_cp[strlen(haystack) + 5];
//     char haystack_cp[strlen(haystack) + strlen(needle) + 1];
//     char needle_cp[strlen(needle) + 1];
//     strcpy(haystack_cp, haystack);
//     strcpy(old_haystack_cp, haystack_cp);
//     strcpy(needle_cp, needle);
//     int j = 0, i, old_haystack_len = strlen(haystack_cp);
    
//     for (i = index; i < index + strlen(needle_cp); i++) {
//         haystack_cp[i] = needle_cp[j++];    
//     }
//     for (i = (index + strlen(needle_cp)); i < strlen(needle_cp) + old_haystack_len; i++) {
//         printf("i = %c\n", old_haystack_cp[index]);
//         haystack_cp[i] = old_haystack_cp[index++];
//     }
//     haystack_cp[strlen(haystack_cp)] = 0;

//     strcpy(haystack, haystack_cp);
//     return SUCCESS;

// }


int insert_string(char * haystack, size_t haystack_size, char * needle, int index) {
    
    int needle_len = strlen(needle), haystack_len = strlen(haystack);
    if (haystack_size < (haystack_len + needle_len)) {
        return FAILED;
    }

    char old_haystack_cp[haystack_len + 1];
    char haystack_cp[haystack_len + needle_len + 1];
    strcpy(haystack_cp, haystack);
    strcpy(old_haystack_cp, haystack_cp);
    int j = 0, i, old_haystack_len = haystack_len;
    
    for (i = index; i < index + needle_len; i++) {
        haystack_cp[i] = needle[j++];    
    }
    for (i = (index + needle_len); i < needle_len + old_haystack_len + 1; i++) {
        haystack_cp[i] = old_haystack_cp[index++];
    }

    strcpy(haystack, haystack_cp);
    return SUCCESS;

}