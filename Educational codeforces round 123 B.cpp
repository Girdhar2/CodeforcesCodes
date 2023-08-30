#include<bits/stdc++.h>

using namespace std;


void helper(){
    long long n;
    cin>>n;
    if(n == 3) {
        cout<<3<<" "<<2<<" "<<1<<endl ;
        cout<<3<<" "<<1<<" "<<2<<endl ;
        cout<<1<<" "<<3<<" "<<2<<endl ;
        return ;
    }
    for(int i=i; i<n; i++) {
        for(int j=n-i; j>=0; j--) {
            cout<<j<<" " ;
        }
        cout<<endl ;
    }

}


int main(){
    int t;
    cin>>t;
    while(t--){
        helper();
    }
}