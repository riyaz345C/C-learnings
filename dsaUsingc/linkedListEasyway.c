#include <stdio.h>
#include <stdlib.h>
typedef struct Node {
  int value;
  struct Node *next;
}node;

node* head;
void init(){
  head = NULL;
}
node* createNode(int data){
  node *newNode = (node*)malloc(sizeof(node));
  newNode->value = data;
  newNode->next = NULL;
  return newNode;
}

void insert(int data){
  node *newNode = createNode(data);
  newNode->next = head;
  head = newNode;
}
void printAll(){
  node *temp = head;
  while(temp != NULL){
  printf("%d\n",temp->value);
    temp = temp -> next;
  }
}
void deleteFirst(int data){
  node *current = head;
  node *prv = NULL; 
    if(current != NULL && current->value==data){
        prv = current->next;
        free(current);
        return;
    }
  while(current != NULL && current->value!=data ){
    prv = current;
    // printf("%d\n",current->value);
    current = current -> next;
  }
    prv -> next = current -> next;
    free(current);
    if(current == NULL) return;
    
  // temp->next = te
  // free(temp->next)
}
void deleteByIndex(int index){
    node *current = head;
    node *prv;
    int num;
    for(num=0;num<index;num++){
        prv = current;
        current = current -> next;
    }
    prv->next = current->next;
    free(current);
}
int main(){
  init();
  insert(1);
  insert(2);
  insert(3);
  insert(31);
  insert(312);
  printAll();
  deleteFirst(1);
  deleteByIndex(1);
  printf("after delete\n");
    
    
    
    
  printAll();
  // // insert(&head,2);
  
  return 0;
}