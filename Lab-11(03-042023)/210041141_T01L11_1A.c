#include <stdio.h>
#include <stdlib.h>
  
// A structure of linked list node 
struct node {
  int data;
  struct node *next;
} *head;
 
void initialize(){
    head = NULL;
}
 
// Inserts a node in front of a singly linked list.
void insertAtFront(int num) {
    //Create a new Linked List node
    struct node* newNode = (struct node*) malloc(sizeof(struct node));
    newNode->data  = num;
    //Next pointer of new node will point to head node of linked list 
    newNode->next = head;
    //make new node as new head of linked list 
    head = newNode;
}
 
// Inserts a node at the end of the singly linked list.

void insertAtEnd(struct node* head, int num){
    // Input validation
    if (head == NULL) { 
       printf("Error : Invalid node pointer !!!\n");       
       return;  
    }
    //creates a new node 
    struct node* newNode =(struct node*) malloc(sizeof(struct node));
    newNode->data  = num;
    newNode->next = NULL;
    // Traverse from head to last node  
    while(head->next != NULL)
       head = head->next;
     
    // Insert newNode after Tail node 
    head->next = newNode;
}
 

//Prints a linked list from head node till tail node 

void printLinkedList(struct node *nodePtr) {
  while (nodePtr != NULL) {
     printf("%d", nodePtr->data);
     nodePtr = nodePtr->next;
     if(nodePtr != NULL)
         printf(" ");
  }
}
//driver
int main() {
    int count = 0, num = 0;
    char instruction[50];
    scanf("%d", &count);
    //initialize pointer for the first node
    initialize();
    //take input from user and add it to the linked list
   for(int i = 0; i < count; i++){
    scanf("%s %d", &instruction, &num);
    //add first input to the beginning of the list
    if(i == 0){
        insertAtFront(num);
    }
    else if(instruction[0] == 'B'){
        insertAtFront(num);
    }
    else if(instruction[0] == 'E'){
        insertAtEnd(head, num);
    }
   }
   //print the linked list
    printLinkedList(head);
    return 0;
}