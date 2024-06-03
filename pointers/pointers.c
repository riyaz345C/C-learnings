#include <stdio.h>
typedef struct{
    int x;
}points;

int main(){
    points p1={12};
    points *ptp1=&p1;
    printf("%d",ptp1->x);
    int x = 30;
    // int* xp= &x;
    // printf("%p\n",xp);
    // printf("%d",*xp);

    //pointers of array
    // int ar[]={1,2,4};
    // int *i= &ar;
    // printf("%d\n",i); // getting error due incompatible pointer variable
}