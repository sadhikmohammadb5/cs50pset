#include <cs50.h>
#include<string.h>
#include<stdio.h>
 int main(void)
 {
    string strings[]={ "sadhik","suraj","sahib"};
    string s=get_string("name: \n");

        for(int i=0;i<3;i++)
        {
            if(strcmp(strings[i],s)==0)
            {
                printf("found\n");
                return 0;
            }
        }
        printf("not found\n");
 }
