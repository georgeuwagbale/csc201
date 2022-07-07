//
// Created by uwagb on 02/11/2021.
//

#include <iostream>

using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node* prev;
};

//Front of list
void begin(Node** head_ref, int new_data){
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = (*head_ref);
    new_node->prev = NULL;

    if ((*head_ref) != NULL){
        (*head_ref)->prev = new_node;
    }
    (*head_ref) = new_node;
}

//Insert a new node after the given node
void insertAfter(Node* prev_node, int new_data){
    if (prev_node == NULL){
        cout << "The given previous node cannot be NULL";
    }
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = prev_node->next;
    prev_node->next = new_node;
    new_node->prev = prev_node;

    if(new_node->next != NULL){
        new_node->next->prev = new_node;
    }
}

void last(Node** head_ref, int new_data){
    Node* new_node = new Node();
    Node* last = *head_ref;
    new_node->data = new_data;

    new_node->next = NULL;
    if(*head_ref == NULL){
        new_node->prev = NULL;
        *head_ref = new_node;
    }

    while(last->next != NULL){
        last = last->next;
        last->next = new_node;
        new_node->prev = last;
    }
}

void printList(Node* node){
    Node* last;
    cout << "\nTraversal in forward direction \n";
    while(node != NULL){
        cout << node->data << "";
        last = node;
        node = node->next;
    }
}

int main(){
    Node* head = NULL;
    last(&head, 6);
    begin(&head, 7);
    cout << "The Linked List : ";
    printList(head);
    begin(&head, 1);
    cout << "The Linked List : ";
    printList(head);
    last(&head, 4);
    insertAfter(head->next, 8);
    cout << "The Linked List : ";
    printList(head);

    return 0;
}
