#include <stdio.h>
#include <string.h>

int main(int argc, char **argv)
{


    int my_ngarm[130]={0};

    for(int i=1;i<argc;i++)
    {
       for(int j = 0;j < (int)strlen(argv[i]);j++)
        {
            my_ngarm[(int)argv[i][j]]++;
        } 
    }
    int i=0;
    while(i<130)
    {
        if(my_ngarm[i] > 0 )
        {    
            printf("%c:%d\n",i, my_ngarm[i]);
        }
        i++;    
    }
    return 0;
}