#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node* next;
};
Node* head; //Global variable, can be accessed anywhere.
void print(){
    Node* temp = head;
    cout<< "The list are: ";
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout<< endl;

}
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
int main() {
    head = NULL; // Empty List.
    insert(2,1); //List:2
    insert(3,2); //List:2 3
    insert(4,1); //List:4 2 3
    insert(5,2); //List:4 5 2 3 
    print();

}