#include <bits/stdc++.h>

using namespace std;

struct Node{
    int data;
    Node* next;
};
Node* head;
void insert(int data){// insert at the end of node.
    Node* temp = new Node();
    temp->data = data;
    temp->next = head;
    head = temp;


}
void Delete(int n){ // delete node at nth position.
    Node* temp2 = head;
    if(n ==1){
        head = temp2->next;
        delete temp2;
        return;
    }
    for(int i=0; i<n-2;i++){
        temp2 = temp2->next;
    }
    //temp2 points to (n-1) node
    Node* temp3 = temp2->next;

    temp2->next = temp3->next;

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
    int n;
    cout << "Enter the position" << endl;
    cin>> n;
    Delete(n);
    print();


}