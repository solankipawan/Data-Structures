#include <bits/stdc++.h>

using namespace std;

struct Node{
    int data;
    Node* link;
};
Node* top = NULL;
void push(int x){
    Node* temp = new Node();
    temp->data = x;
    temp->link = top;
    top = temp;

}

void pop(){
    if(top == NULL){
        cout<<"Error: Stcak is Empty";
        return;
    }
    Node* temp1 = top;
    top = top->link;
    free(temp1);
}
void topOfStack(){
    cout<<top->data <<endl;
}
bool IsEmpty(){
    if(top == NULL) return true;
    else return false;    
}

void print(){
    Node* temp2 = top;
    if(temp2 == NULL){
        cout<<"The stack is empty"<< endl;
        return;
    }
    cout<<"Stack elements is: ";
    while(temp2!= NULL)
    {
        cout<< temp2->data<<" ";
        temp2= temp2->link;
    }   
    cout<< endl;
}

int main(){
    push(2);print();
    push(3);print();
    push(4);print();
    push(5);print();
    push(6);print();
    pop();
    push(7);print();

}