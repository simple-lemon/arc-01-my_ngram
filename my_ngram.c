#include <stdio.h>

int con(char *str, char charc) {
    int cnt = 0;
    int g = 0;

    while (str[g] != '\0') {
        if (str[g] == charc) {
            cnt++;
        }
        g++;
    }

    return cnt;
}

int main(int argc, char **argv) {
    int cnt;
    for (char charc = 0; charc < 127; charc++) {
        cnt = 0;

        for (int i = 1; i < argc; i++) {
            cnt += con(argv[i], charc);
        }

        if (cnt > 0) {
            printf("%c:%d\n", charc, cnt);
        }
    }

    return 0;
}
