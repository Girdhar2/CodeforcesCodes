#include<iostream>
using namespace std;

int robotCleaner(){
    int r,c,r1,c1,r2,c2,m=0,n=0;
    cin>>r>>c>>r1>>c1>>r2>>c2;
    if(r1==r2 || c1==c2)
    return 0;
    
    if(r1<r2)
    m = r2-r1;
    else
    m = r-r2 + r-r1;

    if (c1<c2)
    n = c2-c1;
    else
    n = c-c1 + c-c2;

    if(m<n)
    return m;
    else
    return n;
}

int main(){
    int t,i;
    cin>>t;
    while(t--){
        int ans = robotCleaner();
        cout<<ans<<endl;
    }
    return 0;
}