#include <stdio.h>
#include <stdlib.h>
struct Stack{
  int top;
  unsigned size;
  int *arr;
};
// int *findStructSize(struct Stack *stack){
//   // printf("size : %lu\n",sizeof(struct Stack));
//   return sizeof(stack);
// }
struct Stack* createStack(unsigned size){
  struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
  stack -> size = size;
  stack -> top = -1;
  stack -> arr = (int*)malloc(stack -> size * sizeof(int));
  return stack;
}
int isFull(struct Stack *stack){
  return stack -> top == stack -> size - 1;
}
int isEmpty(struct Stack *stack){
  return stack -> top == -1;
}

void push(struct Stack *stack,int item){
  if(isFull(stack)==1){
    printf("**** stack is full ****\n");
    return;
  }
  stack -> arr[++(stack -> top)] = item;
  printf("pushed item %d top : %d\n",item,stack->top);
}
int pop(struct Stack *stack){
  if(isEmpty(stack)){
    printf("****stack is empty****\n");
    return 0;
  }
  return stack -> arr[stack -> top--];
  
}
void printAll(struct Stack *stack){
  
  printf("top %d , size %d\n", stack -> top,stack -> size);
  
  if(isEmpty(stack) == 0){
    printf("loop starts =====================\n");
    for(int i = 0 ; i <(stack->top)+1; i++){
      printf("array arr[%d] value is %d\n",i,stack->arr[i]);
      // printf("array arr[%d] value is %d\n",i+1,stack->arr[i+1]);
      // printf("array arr[%d] value is %d\n",i+2,stack->arr[i+2]);
    }
    printf("loop end ========================\n");
  }
}
int main(){
  
    printf("Hello, World!\n");
    printf("size %lu\n",sizeof(struct Stack));
    struct Stack *stack1 = createStack(5);
    push(stack1,10);
    push(stack1,101);
    push(stack1,211);
    push(stack1,2001);
    // push(stack1,20021);
    
    printAll(stack1);
    pop(stack1);
    // printf("poped value %d\n",pop(stack1));
    // printf("arr last element %d",stack1 -> arr[])
    printf("%d \n",isFull(stack1));
    printf("%d \n",isEmpty(stack1));
    printAll(stack1);
    return 0;
  
}