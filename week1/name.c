#include <stdio.h>
#include<cs50.h>
int main(void)
{
    int x=get_int("enter passcode\n");
    printf("passcode:%i\n",x);
    if (x==7272)
    {
    printf("access granted\n");
    }
    else
    {
    printf("access denied\n");
    }

}

