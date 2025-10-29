#include <stdio.h>
#include<cs50.h>
int main(void)
{
    int x=get_int("what is x");
    int y=get_int("what is y");
    if(x<y)
    {
    printf("x is lessthan y \n");
    }
    else if (x>y)
    {
    printf("x is greaterthan y\n");
    }
    else
    {
        printf("x is equal to y ");
    }
}

