#include <stdio.h>

int my_strlen(char *string)
{
    int string_count = 0;

    for (int i = 0; string[i]; i++)
    {
        string_count++;
    }

    return string_count;
}

void my_ngram(int argc_c, char **param_1)
{
    int ascii_symbols[256] = {0};

    for (int i = 1; i < argc_c; i++)
    {
        int param_1_length = my_strlen(param_1[i]);

        for (int j = 0; j < param_1_length; j++)
        {
            ascii_symbols[param_1[i][j]]++;
        }
    }

    for (int i = 0; i < 256; i++)
    {
        if (ascii_symbols[i] > 0)
        {
            printf("%c:%d\n", i, ascii_symbols[i]);
        }
    }
}

int main(int argc, char **argv)
{
    if (argc < 2)
    {
        printf("");
        return 0;
    }

    my_ngram(argc, argv);

    return 0;
}
