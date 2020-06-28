// LinkedList insertion at the begining.
#include <bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    Node* next;
};

Node* head; //Global variable, can be accessed anywhere.
void insertion(int x){
    Node* temp = new Node();
    temp->data = x;
    temp->next = head;
    head = temp;

}
void print() {
    Node* temp = head;
    cout << "The List is: " << " ";
    while(temp != NULL){
        cout<< temp->data <<" ";
        temp = temp->next;

    }
    cout << endl;

}
int main() {
    head = NULL; //Empty List.
    cout << "How many element you want to insert in linkedlist " << endl;
    int n,x;
    cin >> n;
    for(int i =0; i<n;++i){
        cout<< "Enter the number ";
        cin >> x;
        insertion(x);
        print();
    }

    return 0;
}
