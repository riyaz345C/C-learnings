#include<stdio.h>
#include<stdlib.h>
#include <string.h>

int main(){
  
  int size;
  printf("enter size of array ");
  scanf("%d",&size);
//   while(size == 0){
//   if(size == 0){
//   printf("enter size of array\n");
//   scanf("%d",&size);
//   }
//   }
int *arr = (int *)malloc(size * sizeof(int));
char input[100] ="";
for(int i = 0; i<size; i++){
    strcpy
    char temp[50];
    printf("Enter Number %d :\n",i);
    scanf("%d",&arr[i]);
    // printf("%d\n",arr[i]);
    // input += "["+arr[i]+"]"; this is not valid in c
    sprintf(temp,"[%d,]",arr[i]);
    strcpy(input , temp);
}
printf("%s",input);
//   printf("size %d",size);
  
  return 0;
}