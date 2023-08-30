#include<iostream>

using namespace std;

int main(){

    int n,t=1;
    cin>>n;
    int i,a[n];
    cin>>a[0];
    for(i=1;i<n;i++){
        cin>>a[i];
        if(a[i]!=a[i-1])
        t++;
    }

    cout<<t;

    return 0;
}