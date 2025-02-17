#include <stdio.h>
#include <stdlib.h>

// Define a structure for a node in the linked list
struct Node {
    int data;
    struct Node* next;
};struct node* temp,* head;

// Function to create a new node
struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Function to display the linked list
void displayLinkedList() {
    struct node* temp,* head;
    temp=head;
    while ( temp!= NULL) {
        printf("%d  ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Main function
int main() {
    int n, data;
    struct Node *head = NULL, *temp;

    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input. Number of nodes should be greater than 0.\n");
        return 1;
    }

    printf("Enter the data for each node:\n");
    for (int i = 0; i < n; i++) {
        printf("Node %d: ", i + 1);
        scanf("%d", &data);
        if (head == NULL) {
            head = createNode(data);
            temp = head;
        } else {
            temp->next = createNode(data);
            temp = temp->next;
        }
    }

    printf("Linked List: ");
    displayLinkedList();

    // Free memory
    while (temp != NULL) {
        temp = head;
        temp = temp->next;
        free(temp);
    }

    return 0;
}
