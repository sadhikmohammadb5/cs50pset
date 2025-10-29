#include<stdio.h>
#include<cs50.h>
#include<string.h>
typedef struct
{
    string name;
    float number;

}
person;

int main(void)
{
    person people[3];

    people[0].name="sadhik";
    people[0].number=7674897230;

    people[1].name="suraj";
    people[1].number=7878937890;

    people[2].name="ganni";
    people[2].number=9491371510;


    string name=get_string("name: \n");

    for(int i=0;i<3;i++)
    {
        if(strcmp(people[i].name,name)==0)
        {
            printf("found\n %f\n",people[i].number);
            return 0;
        }
    }
    printf("not found\n");
    return 1;
}
