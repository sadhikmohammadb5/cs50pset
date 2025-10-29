#include<stdio.h>
#include<cs50.h>
int main(void)
{
    string name=get_string("what is your name:");
        printf("hello:%s\n",name);
    int age=get_int("what is your age:");
        printf("your age is :%i\n",age);
        printf("AGE LIMIT TO ENTER THE FEILD IS 18\n");
    if (age>18)
    {
        printf("%s you are eligible\n",name);
    }
    else
    {
    printf("%s you are not eligible\n",name);
    }

}
