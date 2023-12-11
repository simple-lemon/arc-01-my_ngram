#include <stdio.h>
#include <string.h>
int my_strlen(char* param_1) 
{
    int length = 0;
    while(param_1[length] != '\0'){
       length++;
    }
    return length;
}

int main(int argc, char** argv) 
{
    int str[127] = {0}; 
    for(int i = 1; i < argc; i++) {
        for (int j = 0; j < my_strlen(argv[i]); j++) {
            str[(int)(argv[i][j])]++;
        }
    }

    for(int i = 0; i < 127; i++){
        if (str[i] > 0) {
            printf("%c:%d\n", i, str[i]);
        }
    }

    return 0;
}
