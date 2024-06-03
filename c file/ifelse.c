#include <stdio.h>
int main(){
    int age = 19;
    if(age>18){
        printf("eligible");
    }
    else if(age==18){
        printf("18???");
    }
    else{
        printf("not eligible");
    }
    return 0;
}