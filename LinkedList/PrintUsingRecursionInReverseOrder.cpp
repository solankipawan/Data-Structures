#include <bits/stdc++.h>

using namespace std;

struct Node{
    int data;
    Node* next;
};

Node* Insert(Node* head, int data){
    Node *temp = new Node();
    temp->data = data;
    temp->next = NULL;
    if(head == NULL)
    {
     head = temp;
    }
    else {
        Node* temp1 = head;
        while(temp1->next != NULL)  temp1 = temp1->next;
        temp1->next = temp;
        
    }
    return head;
    }

    void print(Node* head){
        if(head == NULL){// Exit Condition.
            return;
        }
        print(head->next); //Recursive call
         cout<<head->data<<" ";//frist print the value in the node
        
        
    }

int main(){
    Node* head = NULL;  // local variable    
    head = Insert(head,2);
    head = Insert(head,3);
    head = Insert(head,4);
    head = Insert(head,5);
    print(head);
    ;
}