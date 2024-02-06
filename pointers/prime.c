#include <stdio.h>
int isprime(int num){
    if(num<2){
        return 0;
    }
    for(int i=2;i*i <=num;i++){
        if(num%i==0){
            return 0;
        }
    }
        return 1;
}
int main(){
int x = isprime(121);
printf("%d",x);
}

