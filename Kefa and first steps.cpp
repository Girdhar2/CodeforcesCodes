#include<iostream>

using namespace std;

int main(){

    long long n,i;
    cin>>n;
    long long a[n],k=1,t=1;

    cin>>a[0];

    for(i=1;i<n;i++){
        cin>>a[i];
        if(a[i]>=a[i-1])
        t++;
        else
        t=1;

        if(t>k)
        k=t;
    }

    cout<<k;

    return 0;
}