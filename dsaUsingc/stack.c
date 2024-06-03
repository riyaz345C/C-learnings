#include <stdio.h>
#define MAX_SIZE 100
typedef struct{
    int arr[MAX_SIZE];
    int top;
}Stack;
// intialize stack
void initializeStack(Stack *s){
    s->top = -1;
} 
// isEmpty 
int isEmpty(Stack *s){
    return s->top;
    // int x = s->top;
    // printf("%d",x);
}
// isFull
int isFull(Stack* s){
    return s->top==MAX_SIZE - 1;
}
// add method
int push(Stack* s,int x){
    if(isFull(s)){
        printf("%s\n","stack overflow");
    }
    s->arr[++s->top] = x;
}
// pop method 
int pop(Stack *s){
    if(isEmpty(s)==-1){
        printf("%s\n","stack empty");
    }
    return s->arr[s->top--];
}
// total
int peek(Stack* s){
    if(isEmpty(s)==-1) {
        printf("%s","null");
        // printf("%c","d");
    }
    else{
    int x = s->arr[s->top];
        printf("%d", x);
    }
}

int main(){
    Stack s1 ;
    initializeStack(&s1);
    Stack *ss =  &s1;
    // printf("%d",ss->top);
    push(&s1,1);
    push(&s1,2);
    pop(&s1);
    // push(&s1,3);
    peek(&s1);
    // pop(&s1);
    // isEmpty(&s1);
    // push(&s1,2);
    // printf("%d",peek(&s1));
    // peek(&s1);
    return 0;
}