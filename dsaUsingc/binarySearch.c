#include <stdio.h>
void bs(int arr[],int len,int val){
  // right mid right
  int start = 0;
  int end = len-1;
  int mid ;
  // int arr = *arr1;
  while(start <= end){
    
    mid = start + (end - start)/2;
    printf("%d\n",mid);
    
    if(arr[mid]== val){
      printf("index : %d",mid);
    }
    if(arr[mid] < val){
      start = mid+1;
    } else{
      end = mid-1;
    }
    
  }
    // printf("%d",);
}

int main(){
    int p[]={1,2,3,4,5,6,7,8,9};
    int *ap = p;
    bs(p,9,8);
    // printf("%d",7/2);
    return 0;
}
