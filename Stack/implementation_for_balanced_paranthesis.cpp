#include <bits/stdc++.h>
#define MAX_SIZE 1001

using namespace std;
void check(char *ch, int n){
    stack<char> s;
    for(int i=0; i<n;++i){
        if(ch[i] == '(' || ch[i] == '{'|| ch[i] == '['){
            s.push(ch[i]);
        }
        else if(ch[i] == ')' && s.top() == '('){
            s.pop();
        }
        else if(ch[i] == '}' && s.top() == '{'){
            s.pop();
        }
        else if(ch[i] == ']' && s.top() == '['){
            s.pop();
        }
    }
    if(s.empty() == true){
        cout<< "Expreesion is balanced";
    }
    else {
        cout<< "Expression is unbalanced";
    }
}

int main(){
    char ch[MAX_SIZE];
    int i, n;
    cout<< "Enter the Expression";
    gets(ch);
    n = strlen(ch);
    check(ch, n);

}