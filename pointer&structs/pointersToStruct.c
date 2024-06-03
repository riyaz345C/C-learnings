#include <stdio.h>
int main()
{
  // unpacked struct
  typedef struct user{
    char name[9];
    int gender;
    int age;
  } xo;
  typedef struct userEfficient{
    char name[9];
    int gender;
    int age;
  }__attribute__((packed));
  // declaring struct
  struct user x; // by using stuct name
  // xo x1;         //by using its alias name
  xo x2 =  {"aaq",1,21};
  // Assigning Value to struct
  
  // x2 = {"aaq",1,21};    // method-1 using curly brackets
  
  x.name[6] = "por"; // method-2 using dot operator
  x.gender = 1;
  x.age = 10;
  
  // result
  // printf("x1 stuct age : %d\n",x1.age);
  printf("x stuct age :%d\n",x.age);
  // size of unpacked struct;
  printf("size of char : %d & int : %d\n",sizeof(char),sizeof(int));
  printf("size of unpaked struct %lu\n",sizeof(struct user));
  printf("size of paked struct %lu\n",sizeof(struct userEfficient));
  
  // POINTERS TO STRUCTS 
  struct user *pointerOfStruct = &x2;
  printf("call value by * %s\n",(*pointerOfStruct).name);
  printf("call value by -> %s\n",pointerOfStruct -> name);
  
}