#include<iostream>

using namespace std;

int main(){

    long long  t,s=1,p=1,k=1;
    cin>>t;
    long long a[t],i;
    for(i=0;i<t;i++){
        cin>>a[i];
    }

    for(i=0;i<t;i++){
        for(j=1;j<=2a[i];j++){
            s *= j;
            if(j%2==0){
                p *= j/2;
                k *= 2;
            }
        }

        cout<<s*p/k;
        s=1;
        p=1;
        k=1;
    }

    return 0;
}