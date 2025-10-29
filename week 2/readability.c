#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<math.h>
#include<cs50.h>
int main(void)
{
    //input
    string text=get_string("text: ");

    //case
    int l=0,s=0,w=1;
    for(int i=0, n=strlen(text);i<n;i++)
    {
        if(text[i]==' ')
        {
            w++;
        }
        else if(text[i]=='!' || text[i]=='?' || text[i]=='.')
        {
            s++;
        }
        else if (isalpha (text[i]))
        {
            l++;
        }
    }
//output
    float L = (float) l/w * 100;
    float S = (float) s/w * 100;
    int index =  round(0.0588 * L -0.296 * S -15.8);

    if(index < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (index >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %d\n", index);
    }
}
