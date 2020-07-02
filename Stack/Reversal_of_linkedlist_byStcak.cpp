#include <bits/stdc++.h>

using namespace std;
struct  Node
{
    int data;
    Node* next;
};
Node* head;

void Reverse(){
    if(head == NULL) return;
    stack<Node*> s;
    Node* temp = head;
    while (temp != NULL)
    {
        s.push(temp);
        temp = temp->next;
    }
    temp = s.top();
    head = temp;
    s.pop();
    while (!s.empty())
    {
        temp->next = s.top();
        s.pop();
        temp = temp->next;
    }
    temp->next = NULL;
}
void insert(int data){ // insert at the end of node.
    Node* temp = new Node();
    temp->data = data;
    temp->next = head;
    head = temp;
}
void print(){
    Node* temp1 = head;
    cout<< "The List is: ";
    while(temp1 != NULL){
        cout<<temp1->data << " ";
        temp1 = temp1->next;
    }

}
int main(){
    head = NULL; // empty list.
    insert(2);
    insert(4);
    insert(6);  
    insert(5); //List is: 2, 4, 6, 5.
    print();
    cout<< endl;
    Reverse();
    print();
}