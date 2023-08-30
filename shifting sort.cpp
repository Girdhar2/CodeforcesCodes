#include<iostream>

using namespace std;

int main(){
    int t,i,j,z,n,m;
    cin>>t;
    int k[t],l,p[t],f[t][52],g[t][52],h[t][52];
    long a[t][52];

    for(i=0;i<t;i++){
        cin>>k[i];
        for(j=1;j<=k[i];j++){
            cin>>a[i][j];
        }
    }
    int q;
    long s=1000000000;
    long arr[50];
    for(i=0;i<t;i++){
        p[i]=0;
        for(n=1;n<=k[i];n++){
            s=1000000000;
            for(j=n;j<=k[i];j++){
                if(a[i][j]<s){
                    s=a[i][j];
                    m=j;
                }
            }
            if(m!=n){
                int d;
                long arr[51];
                for(d=n;d<=m;d++){
                    arr[d-n]=a[i][d];
                }
                a[i][n]=arr[m-n];
                for(d=n+1;d<=m;d++){
                    a[i][d]=arr[d-n-1];
                }
                f[i][p[i]]=n;
                g[i][p[i]]=m;
                h[i][p[i]]=m-n;
                p[i]++;
                }
            }
        }

for(i=0;i<t;i++){
    cout<<p[i]<<endl;
    for(j=0;j<p[i];j++){
        cout<< f[i][j] << g[i][j] << h[i][j] << endl;
    }
}


    return 0;
}