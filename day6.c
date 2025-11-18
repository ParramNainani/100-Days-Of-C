#include<stdio.h>
#include<stdlib.h>
struct Node {
    int data;
    struct Node* next;
};
// int main(){
//     struct Node* a;
//     a = (struct Node*)malloc(sizeof(struct Node));
//     if(a==NULL){
//         printf("Allocation Failed");
//     }
//     else{
//     a->data = 10;
//     a->next = NULL;
//     printf("%d\n", a->data);
//     free(a);
//     }
// }

// int main(){
//     struct Node* node1;
//     struct Node *node2;
    
//     node1 = (struct Node *)malloc(sizeof(struct Node));
//     node2 = (struct Node *)malloc(sizeof(struct Node));

//     if(node1 == NULL || node2 == NULL){
//         printf("Allocation Failed");
//         free(node1);
//         free(node2);
//         return 1;
//     }
//     node1->data = 10;
//     node2->data = 20;
//     node1->next = node2;
//     node2->next = NULL;
//     printf("%d\n", node1->data);
//     printf("%d\n", node1->next->data);
//     free(node1);
//     free(node2);
// }


void printList(struct Node* head){
    struct Node *temp = head;
    while(temp != NULL){
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// int main(){
//     struct Node *node1;
//     struct Node *node2;
//     struct Node *node3;
//     node1 = (struct Node*)malloc(sizeof(struct Node));
//     node2 = (struct Node*)malloc(sizeof(struct Node));
//     node3 = (struct Node*)malloc(sizeof(struct Node));

//     if (node1 == NULL || node2 == NULL || node3==NULL){
//         printf("Allocation Failed");
//         return 1;
//     }

//     node1->data = 10;
//     node2->data = 20;
//     node3->data = 30;
//     node1->next = node2;
//     node2->next = node3;
//     node3->next = NULL;
//     printList(node1);

//     free(node1);
//     free(node2);
//     free(node3);
// }

// void insertAtHead(struct Node** head,int newD){
//     struct Node *new;
//     new = (struct Node *)malloc(sizeof(struct Node));
//     if(new == NULL){
//         printf("Allocation failed");
//     }
//     else{
//     new->data = newD;
//     new->next = *head;
//     *head = new;
// }}

// int main(){
//     struct Node *header=NULL;
//     insertAtHead(&header, 30);
//     insertAtHead(&header, 20);
//     insertAtHead(&header, 10);
//     printList(header);
// }

// void insertAtEnd(struct Node **head,int newD){
//     struct Node *new;
//     new = (struct Node *)malloc(sizeof(struct Node));
//     new->data = newD;
//     new->next = NULL;

//     if(*head == NULL){
//         *head = new;
//         return;
//     }
//     struct Node *temp = *head;
//     while(temp->next!=NULL){
//         temp = temp->next;
//     }
//     temp->next = new;
// }


// int main(){
//     struct Node *header = NULL;
//     insertAtEnd(&header, 30);
//     insertAtEnd(&header, 20);
//     insertAtEnd(&header, 10);
//     printList(header);
// }