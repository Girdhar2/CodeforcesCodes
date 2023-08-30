#include<bits/stdc++.h>

using namespace std;


void helper(){
    long long l,r,a ;
    cin>>l>>r>>a ;
    long long t = 0 ;
    for(int i=r; i>=l; i--) {
        int b = i/a + (i%a) ;
        if(t < b)
            t = b ;
        if(i%a == a-1)
            break ;
    }
    cout<<t<<endl ;
}


int main(){
    int t;
    cin>>t;
    while(t--){
        helper();
    }
}