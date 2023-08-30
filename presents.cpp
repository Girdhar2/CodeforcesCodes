#include<iostream>

using namespace std;

int main(){

    int n,i,t;
    cin>>n;
    int s[n];

    for(i=1;i<=n;i++){
        cin>>t;
        s[t]=i;
    }

    for(i=1;i<=n;i++){
        cout<<s[i]<<" ";
    }

    return 0;
}