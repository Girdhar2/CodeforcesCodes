#include<bits/stdc++.h>

using namespace std;


bool helper(){
    long long n;
    cin>>n;
    string s;
    cin>> s ;
   if(n>2)
   return false;
   else if(n == 2) {
       if(s[0] == s[1])
       return false ;
   }
   return true ;
}


int main(){
    int t;
    cin>>t;
    while(t--){
        bool a = helper();
        if(a)
           cout<<"YES"<<endl;
        else
           cout<<"NO"<<endl;
    }
}