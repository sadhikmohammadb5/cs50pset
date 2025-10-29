#include <stdio.h>
#include<cs50.h>
int main(void)
{
    string name =get_string("hi,may i know your name ? ");
        printf("%s wow!\n",name);
    int age =get_int("we have age comformation to start the game,may i know your age!\n");
        if(age>18)
        {
            printf("%iwow!,you are eligible to play\n",age);
        }
        else if(age<18)
        {
            printf("your age is %i which is underage PERMISSION DECLINED",age);
        }
        else
        {
        printf("%iwow!,you are eligible to play\n",age);
        }
    char BOT=get_char("Do you want to enter new world :");
            if (BOT=='y'||BOT=='Y')
            {
                printf("passcode required to enter start:\n");
            }
            else if(BOT=='n'||BOT=='N')
            {
                printf("Tap the back to exit\n");
            }
            int p=get_int("p:");
                printf("passcode:%i\n",p);
                if (p==7272)
                {
                    printf("access granted to start!\n");
                }
                else
                {
                    printf("access denied!\n");
                }
}
