// Time and space complexity for both operation is O(n).
#include <bits/stdc++.h>

using namespace std;

void Reverse(char *C, int n){
    stack<char> s; //stack form Standard templet libraray (STL)
       //loop for push
    for(int i =0; i<n; ++i){
             s.push(C[i]);
    }
       //loop for pop
    for(int i=0; i<n;++i){
        C[i] = s.top(); // override the character at index i.
        s.pop(); // perform pop
    }

}

int main(){
    char ch[51];
    cout<< "Eneter a string: ";
    cin >> ch;
    Reverse(ch, strlen(ch));
    cout<< ch;

}