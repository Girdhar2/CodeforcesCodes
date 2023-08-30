#include<bits/stdc++.h>

using namespace std;

int main(){

    long n,m,i,s=1009;
    cin>>n>>m;

    long a[m];

    for(i=0;i<m;i++){

        cin>>a[i];

    }

    sort(a,a+m);

    for(i=0;i<m-n+1;i++){
       
       if(s>a[i+n-1]-a[i])
       s=a[i+n-1]-a[i];
    }

    cout<<s;

    return 0;
}