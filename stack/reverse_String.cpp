#include <iostream>
#include <stack>
using namespace std;
int main(){
    string str="Raushan";
    stack<char> s;
    for(int i=0; i<str.length(); i++){
        s.push(str[i]);

    }
    while(!str.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }

}