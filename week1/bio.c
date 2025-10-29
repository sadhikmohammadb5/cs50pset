#include<stdio.h>
#include<cs50.h>
int main(void)
{
    string nm=get_string ("what is your name:\n");
    printf("my name is:%s\n",nm);
    string fm =get_string("what is your father name :\n");
    printf("my father name is :%s\n",fm);
    string mn=get_string("what is your mother name:\n:");
    printf("my mother name is%s\n",mn);
    string sn=get_string("what is your sister name :\n");
    printf("my sister name is:%s\n",sn);
}
