void upper2(char *str) {

    if (*str == 0) return;

    do {
        if (*str >= 'a' && *str <= 'z') {

            *str -= 'a' - 'A';
        }

    } while( *(++str));
}