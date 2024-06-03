#include <stdio.h>

typedef struct 
{
    /* data */
    char name[50];
    int age;
} Person;

int main(int argc, char const *argv[])
{
    /* code */
    Person person1 = {name:"Riyaz",age:21};
    Person *person1point = &person1;
    printf("%d\n",person1);
    printf("%d",person1point->age);
    return 0;
}
