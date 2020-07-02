#include <bits/stdc++.h>

using namespace std;

struct Node {
    int data;
    Node* next;
    Node*pre;
};

Node* head;
Node* GetNewNode(int x){
    Node* newNode = new Node();
    newNode->data = x;
    newNode->next = NULL;
    newNode->pre = NULL;
    return newNode;
}

void InsertAtHead(int x){
    Node* newNode = GetNewNode(x);
    if(head == NULL){
        head = newNode;
        return;
    }
    head->pre = newNode;
    newNode->next = head;
    head = newNode;
}

void print(){
    Node* temp = head;
    cout<< "In Forward direction: ";
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout<< endl;
    
}
void printReverse(){
    Node* temp = head;
    if(temp == NULL) { // empty list,exit.
        return;
    }
    while (temp->next != NULL) //going to last node.
    {
        temp = temp->next;
    }
    cout<< "In Reverse direction: ";
    while (temp != NULL)
    {
        cout << temp->data <<" ";
        temp = temp->pre;
    }
    cout<<endl;
}

int main(){
    head = NULL;
    InsertAtHead(2);
    InsertAtHead(3);
    InsertAtHead(4);
    InsertAtHead(5);
    InsertAtHead(6);
    print();
    printReverse();
}