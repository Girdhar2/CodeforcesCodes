#include<iostream>

using namespace std;

int main(){
    long long k,n;
    cin>>n>>k;
    
    if(n%2==1){
        if(k<=(n+1)/2)
        cout<<2*k-1;
        else
        cout<<(k-(n+1)/2)*2;
    }
    else if(n%2==0){
        if(k<=n/2)
        cout<<2*k-1;
        else
        cout<<(k-n/2)*2;
    }

    return 0;
}