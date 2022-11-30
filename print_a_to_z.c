#include<stdio.h>
int main()
{
    char c;
    int i = 0;

    for(c = 65; c<=90; c++)
    {
        printf("%c ", c);
        i++;
        if(i == 4){
            printf("\n");
            i = 0;
        }
    }
    return 0;
}