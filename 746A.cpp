#include<iostream>

using namespace std;

int main(){

    long long t;
    cin>>t;
    long long n[t],h[t],i,j,p,q,s;

    for(i=0;i<t;i++){
        cin>>n[i]>>h[i];
        long long a[i][n[i]];
        p=0;
        q=0;
        for(j=0;j<n[i];j++) {
            cin>>a[i][j];
            if(a[i][j]>p){
                p=a[i][j];
                q=j;
            }

        }
            a[i][q]=0;
            s=0;

        for(j=0;j<n[i];j++){
            if(s<a[i][j])
            s=a[i][j];
        }
        int b=h[i];
        for(j=1;j<=b;j++){
            if(j%2==1)
            h[i] -= p;
            else
            h[i] -= s;
            if(h[i]<1)
            break;
        }
        cout<<j<<endl;
    }

    return 0;
}