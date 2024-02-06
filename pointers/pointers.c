#include <stdio.h>
int main(){
    int x = 30;
    int* xp= &x;
    printf("%p\n",xp);
    printf("%d",sizeof(xp));

    //pointers of array
    int ar[]={1,2,4};
    // int *i= &ar;
    // printf("%d\n",i); // getting error due incompatible pointer variable
}