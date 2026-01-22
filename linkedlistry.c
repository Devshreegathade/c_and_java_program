#include <stdio.h>
#include <stdlib.h>

// Define a node structure
struct Node {
    int data;
    struct Node* next;
};

struct Node* head = NULL; // Points to the start of the list

// 1. Create the first node (initial list)
void createnode() {
    int value;
    head = (struct Node*)malloc(sizeof(struct Node)); // allocate memory
    printf("enter value\n");
    scanf("%d", &value);
    head->data = value;
    head->next = NULL;
}


// 2. Insert at the beginning
void insertAtStart() {
    int value;
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    printf("enter value\n");
    scanf("%d", &value);
    newNode->data = value;
    newNode->next = head; // point to old head
    head = newNode;       // update head
}

// 3. Insert at the end
void insertAtEnd() {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));//memmory allocation
    int value;
    printf("enter value\n");
    scanf("%d", &value);
    newNode->data = value;
    newNode->next = NULL;//null to next pointer

    if (head == NULL) {     //head is null means empty list
        head = newNode; // for empty list(make newnode head)
        return;
    }

    struct Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next; // move to last node(loop run until next pointer is not null)
    }

    temp->next = newNode; // link at end
}

// 4. Insert after a given value
void insertAfter() {     //to spectify postion 
    struct Node* temp = head;           //initialize loop to traverse and search target
    int target ,value;

    printf("Enter the target value after which to insert: ");
    scanf("%d", &target);

    // Find the node with target value
    while (temp != NULL && temp->data != target) {
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Value %d not found in the list.\n", target);
        return;
    }

    // Insert new node after target
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    printf("enter value\n");
    scanf("%d", &value);
    newNode->data = value;         //asign data to new node
    newNode->next = temp->next;   //to replace pointer for previous node with newnode
    temp->next = newNode;       //**** **** */
}

// 5. Delete from start
void deleteAtStart() {
    if (head == NULL) {
        printf("List is empty.\n");
        return;
    }

    struct Node* temp = head;   //temp pointer for head
    head = head->next;   ///
    free(temp);
}

// 6 delete at end
void deleteAtEnd() {
    if (head == NULL) {   //head points to null empty list
        printf("List is empty.\n");
        return;
    }

    // Only one node
    if (head->next == NULL) {
        free(head);
        head = NULL;
        return;
    }

    struct Node* temp = head;
    while (temp->next->next != NULL) { //check for second last node ...next of second last should point null
        temp = temp->next;
    }

    free(temp->next);
    temp->next = NULL;
}


// 7 delete a target nnode specific node in betweeen
void deleteTarget() {
    int target;
    struct Node* temp = head;
    
    printf("Enter value to delete: ");
    scanf("%d", &target);

    // Traverse to find node  before target
    while (temp->next != NULL && temp->next->data != target) {
        temp = temp->next;
    }

    // If target not found
    if (temp->next == NULL){
        printf("not found");
    }

    // Delete target node
    struct Node* Delete = temp->next;
    temp->next = temp->next->next;
    free(Delete);

}


// 8 Search a node
void search() {
    int value;
    printf("enter value\n");
    scanf("%d", &value);
    struct Node* temp = head;
    int position = 0;

    while (temp != NULL) {
        if (temp->data == value) {
            printf("Found %d at position %d.\n", value, position);
            return;
        }
        temp = temp->next;
        position++;
    }

    printf("%d not found in the list.\n", value);
}

// 9. Display the list
void display() {
    struct Node* temp = head;
    printf("Linked List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}


// Main function
int main() {
    int n;
    do {
    printf("Menu :\n");
    printf("1 . create a node\n2 . insert node at start\n3 . insert a node at end\n4 . insert node at any position\n5 . delete a node at start\n6 . delete node at end\n7 . delete a target node\n8 . search node \n9 . display a node \n10 . EXIT\n");
    printf("Enter the number for operation to be performed : ");
    
    scanf("%d", &n);
     switch (n)
     {
     case 1:
        createnode();
        break;
       
     case 2:
        insertAtStart();
        break;
    
     case 3:
        insertAtEnd();  
        break;
        
     case 4:
        insertAfter();
        break;
    
     case 5:
        deleteAtStart();  
        break;
        
     case 6:
        deleteAtEnd();
        break;
    
     case 7:
        deleteTarget();  
        break;   
        
     case 8:
        search();
        break;
    
     case 9:
        display();  
        break; 
        
     case 10:
        printf("exited program\n");   
        break;

     default:
        printf("Invalid input\n");
        break;   
     }         
    } while (n != 10);
    return 0;
}
