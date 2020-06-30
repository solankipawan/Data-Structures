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
        cout<<head->data<<" ";//frist print the value in the node
        print(head->next); //Recursive call
        //If we swap the above two statement so the first call will goto print function after that cout will execute 
        // so this result the print the element in reverse order See in the next program.
        
    /*  For the normal traversal of the linkedList Iterative approch is much better than recursive aaproch because
     it consume more space in stack at every time of function call.*/
        
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