//NON defensible code, do not show to teacher
//Ignore this whole thing to be honsest
/* Program to insert in a sorted list */
#include <stdio.h>
#include <stdlib.h>

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

// function to insert a new_nodein a list
void sortedInsert(struct node **head_ref,
				  struct node *new_node)
{
	struct node *current;
	// Special case for the head and end
	if (*head_ref == NULL || (*head_ref)->data >= new_node->data)
	{
		new_node->next = *head_ref;
		*head_ref = new_node;
	}
	else
	{
		// Locate the node before the point of insertion
		current = *head_ref;
		while (current->next != NULL && current->next->data < new_node->data)
		{
			current = current->next;
		}
		new_node->next = current->next;
		current->next = new_node;
	}
}

// create a new node
struct node *newNode(int new_data)
{
	// allocate node
	struct node *new_node = (struct node *)malloc(sizeof(struct node));

	// put in the data
	new_node->data = new_data;
	new_node->next = NULL;

	return new_node;
}



//driver
int main()
{
	int listlength1 = 0, listlength2 = 0, num = 0;
	scanf("%d %d", &listlength1, &listlength2);
	initialize();
	for (int i = 0; i < listlength1; i++){
		scanf("%d", &num);
		if(i == 0){
			insertAtFront(num);
		}
		else{
		insertAtEnd(head, num);
		}
	}

	printLinkedList(head);

	return 0;
}
