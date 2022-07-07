//
// Created by uwagbalegeorge on 19/04/2022.
// Linear Queue (Linked List)

#include <iostream>
using namespace std;

struct QNode{
    int data;
    QNode* next;
    QNode(int d){
        data = d;
        next = NULL;
    }
};

struct Queue{
    QNode *front, *rear;
    Queue(){
        front = rear = NULL;
    }

    void enQueue(int x){
        // Create a new node
        QNode *temp = new QNode(x);
        // If queue is empty, then new node is front and rear
        if (rear == NULL){
            front = rear = temp;
            return;
        }
        // Add the new node at the end of queue and change rear
        rear->next = temp;
        rear = temp;
    }

    void deQueue(){
        // If queue is empty, return NULL
        if (front == NULL){
            return;
        }

        // Store previous front and move front one node ahead
        QNode
    }
};

