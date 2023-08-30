#include<bits/stdc++.h>

using namespace std;


bool helper(){
    string s ;
    cin>>s ;
    char a;
    cin>>a ;
    for(int i=0; i<s.size(); i++) {
        if(s[i] == a) {
            if(i % 2 == 0)
                return true ;
        }
    }
    return false ;
}


int main(){
    int t;
    cin>>t;
    while(t--){
        if(helper())
            cout<<"Yes"<<endl ;
        else 
            cout<<"No"<<endl ;
    }
}