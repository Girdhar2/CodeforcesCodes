#include <bits/stdc++.h>

using namespace std;

int main(){

    long long t,k,i,n,j,l;
    cin>>t;
    for(k=0;k<t;k++){
        l=0;
        cin>>n;
        double a[n],s=0;
        for(i=0;i<n;i++){
            cin>>a[i];
            s += a[i];
        }
        double q=n,p=s/q;

        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if(i!=j){
                    if((a[i]+a[j])/2==p){
                        l++;
                    }

                }
            }
        }

        cout<<l/2<<endl;
    }

    return 0;
}