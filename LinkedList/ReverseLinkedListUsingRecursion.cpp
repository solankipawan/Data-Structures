#include <bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node* next;
};

Node* head;

// void Reverse(Node* p){
//     if(p->next == NULL){
//         p = head;
//         return;
//     }
//     Reverse(p->next);
//     Node* q = p->next;
//     q->next = p;
//     p->next = NULL;
 Node* reverse(Node* node) 
    { 
        if (node == NULL) 
            return NULL; 
        if (node->next == NULL) { 
            head = node; 
            return node; 
        } 
        Node* node1 = reverse(node->next); 
        node1->next = node; 
        node->next = NULL; 
        return node; 
    } 


// }
void insert(int data, int pos)
{
    Node* temp1 = new Node();
    temp1->data = data;
    temp1->next = NULL;
    if(pos ==1){
        temp1->next = head;
        head = temp1;
        return;
    }
    Node* temp2 = head;
    for(int i =0; i<pos-2; ++i){
        temp2 = temp2->next;
    }
    temp1->next = temp2->next;
        temp2->next = temp1;

}
void print(){
    Node* temp1 = head;
    cout<< "The List is: ";
    while(temp1 != NULL){
        cout<<temp1->data << " ";
        temp1 = temp1->next;
    }

}
int main() {
    head = NULL; // Empty List.
    insert(2,1); //List:2
    insert(3,2); //List:2 3
    insert(4,1); //List:4 2 3
    insert(5,2); //List:4 5 2 3 
    reverse(head);
    print();

}