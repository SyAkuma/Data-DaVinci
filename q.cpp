#include <bits/stdc++.h>
#define ll long long
using namespace std; 


int main(){
    string t;
    cin>>t;
    map<char,int> letters;
    for(char x:t){
        letters[x]++;
    }
    int stlen=t.length();
    int odd=0;
    char arr[stlen]={};
    for(auto a:letters){
        if(a.second%2==1){
            odd++;
            arr[0]=a.first;
        }
        if(odd==2){
            cout<<"NO Solution"<<odd;
            return 0;
        }
    }
    if((stlen%2==0 && odd==1)||(stlen%2==1 && odd==0)){
        cout<<"NO Solution";
        return 0;
    }
    char palin[stlen]={};
    char curr='A';
    for(int i=0;i<stlen/2;i++){
            if(letters[curr]>=2){
            palin[i]=curr;palin[stlen-i]=curr;
            letters[curr]-=2;
            }
            else{
                curr++;
                if(curr=='['){
                    break;
                }
        }
    }
    if(odd==1){
        palin[stlen-(stlen/2)-1]=arr[0];
    }
    for(int i=0;i<=stlen;i++){
        cout<<palin[i];
    }

}