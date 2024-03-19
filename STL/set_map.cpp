#include<iostream>
#include<set>
#include<map>
using namespace std;
// int main(){
//     set<int> s={1,5,4,3,2};
//     for(auto i: s){
//         cout<<i<<" ";
//     }
//     return 0;
// }

int main(){
    map<int,int> mp;
    mp[1]=7;
    mp[100000]=5;
    for(auto i: mp){
            cout<<i.first<<"->"<<i.second;
            cout<<endl;
    }
}