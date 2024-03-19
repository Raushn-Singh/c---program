#include <iostream>
#include<stack>
using namespace std;
void solve(stack<int> &s, int &target){
    //base case
  if(s.empty()){
    s.push(target);
    return;
  }
   int topelement=s.top();
   s.pop();
   solve(s,target);
   s.push(topelement);
}
void insertAtBottom(stack<int> &s){
    if(s.size()==0){
        cout<<"stack is empty";
        return;
    }
    int target=s.top();
    s.pop();
    solve(s,target);

}
int main(){
    stack<int> s;
    s.push(10);
     s.push(20);
      s.push(30);
       s.push(40);
        s.push(50);
         s.push(60); 
         s.push(70);
    
    insertAtBottom(s);
    cout<<"printing element";
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}