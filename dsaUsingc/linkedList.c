#include <stdio.h>
#include <stdlib.h>
typedef struct node {
    int value;
    struct node *next;
} Node;
// for creting node
Node* createNode(int data){
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->value = data;
    newNode->next = NULL;
    return newNode;
}
// inser node at head 
void insertAtBeginning(Node **head,int data){
    Node* newNode = createNode(data);
    newNode->next = *head;
    *head = newNode;
}
// inser node at end of linked list
void insertAtEnd(Node **head,int data){
    Node* newNode = createNode(data);
    Node *temp = *head;
    while(temp -> next != NULL){
        temp = temp->next;
    }
    temp->next = newNode;
}
// iterate through the node
void printAll(Node *head){
    Node *temp = head;
    while(temp != NULL){
        printf("%d\n",temp->value);
        temp = temp ->next;
    }
        printf("END : %d\n",12);
}
// delete by node value
void deleteAt(Node **head,int key){
  Node *temp = *head;
  Node *prev = NULL;
  if(temp!=NULL && temp->value == key){
    *head = temp->next;
    free(temp);
    return;
  }
  while(temp != NULL && temp -> value != key){
    prev = temp;
    temp = temp -> next;
  }
  if(temp == NULL) {
    printf("***VALUE NOT FOUND***");
    return;
  }  
  prev->next = temp->next;
  free(temp);
  printf("***PERFECTLY DELETED***");
  
}

int main(){
    Node *head = NULL;
    insertAtBeginning((&head),1);
    insertAtBeginning((&head),2);
    insertAtBeginning((&head),3);
    insertAtEnd((&head),9);
    printAll(head);
    deleteAt(&head,9);
    return 0;
}