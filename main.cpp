#include <bits/stdc++.h>
#define ll long long
using namespace std; 

vector<string> lsit;

void fn(int a,string b,int c=0){
    if(b.length()==a){
        lsit.push_back(b);
        return;
    }
    if(c%2==0){
        fn(a,b+'0',c++);
        fn(a,b+'1',c++);
    }
    else{
        fn(a,b+'1',c++);
        fn(a,b+'0',c++);
    }
}
int main(){
    int n;
    cin>>n;
    string b="";
    fn(n,b);
    for(auto x:lsit){
        cout<<x<<endl;
    }
}
