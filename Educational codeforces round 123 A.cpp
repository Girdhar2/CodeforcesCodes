#include<bits/stdc++.h>

using namespace std;


bool helper(){
    string s ;
    cin>>s ;
    long long r1,r2,g1,g2,b1,b2 ;
    for(int i=0; i<6; i++) {
        if(s[i] == 'r')
        r1 = i ;
        else if(s[i] == 'R')
        r2 = i ;
        else if(s[i] == 'g')
        g1 = i ;
        else if(s[i] == 'G')
        g2 = i ;
        else if(s[i] == 'b')
        b1 = i ;
        else if(s[i] == 'B')
        b2 = i ;
    }
    if(r1<r2 && b1<b2 && g1<g2)
    return true ;

    return false ;
}


int main(){
    long long t;
    cin>>t;
    while(t--){
        bool a = helper();
        if(a)
           cout<<"YES"<<endl;
        else
           cout<<"NO"<<endl;
    }
}