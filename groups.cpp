#include<iostream>

using namespace std;

int main(){

    long long t,k,i,n,j,p;
    cin>>t;
    long long a[1001][5];
    for(k=0;k<t;k++){
        long long s[5] = {0};
        p=0;
        cin>>n;
        for(i=0;i<n;i++){
            for(j=0;j<5;j++){
                cin>>a[i][j];
                if(a[i][j]==1)
                s[j]++;
            }
        }
    for(i=0;i<5;i++){
        if(s[i]>=n/2)
        p++;
    }

    if(p>1)
    cout<<"YES"<<endl;

    else 
    cout<<"NO"<<endl;
        
    }

    return 0;
}