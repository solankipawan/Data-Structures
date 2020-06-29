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

    Node* reverse(Node* head){
        Node *pre, *current, *next;
        current = head;
        pre = NULL;
        while (current != NULL)
        {
            next = current->next;
            current->next = pre;
            pre = current;
            current = next;
        }
        head = pre;

    return head;
        
    }
    void print(Node* head){
        while (head != NULL)
        {
            cout<< head->data <<" ";
            head = head->next;
        }
    }

int main(){
    Node* head = NULL;  // local variable    
    head = Insert(head,2);
    head = Insert(head,3);
    head = Insert(head,4);
    head = Insert(head,5);
    print(head);
    head = reverse(head);
    cout<<  endl;
    print(head);
}