#include <stdio.h>
int main(){
    int number[]={1,2,3,4,5,6,7,8};
    int len = sizeof(number)/sizeof(number[0]);
    int i;
    for ( i = 0; i < len+1; i++)
    {
        /* code */
    printf("%d\n",number[i]);
    }
    printf("%d\n",number);
    printf("%p",&number);
    
    return 0;
}