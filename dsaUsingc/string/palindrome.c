#include <stdio.h>
int palindrome(char* inp){
  // printf("length : %ld / %lu\n ",sizeof(*inp),sizeof(char));
  int sp = 0;
  while(*inp != '\0'){
    inp++;
    sp++;
  }
  printf("size %d\n",sp);
  int start = 0;
  int end = sp-1;
  //   printf("start0 %c , end4 %c\n",*(inp-sp),*((inp-sp)+4));
  //   printf("start1 %c , end3 %c\n",*(inp+1),*(inp+3));
  while(start<=end){
    if(*(inp-sp+start)==*(inp-sp+end)){
    printf("start %c , end %c\n",*(inp-sp+start),*(inp-sp+end));
      start++;
      end--;
    } else{
      printf("False\n");
      break;
    }
  }
  printf("true\n");
  return 0;
}
int main()
{
    printf("Hello, World!\n");
    char str[] = "qwewq1";
    printf("address %d\n",str);
    palindrome(str);
    return 0;
}