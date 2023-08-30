#include<iostream>

using namespace std;

int main(){

    int t,k=0;
    cin>>t;

    int p,q;

    for(int i=0;i<t;i++){
        cin>>p>>q;
        if(q-p>1)
        k++;
    }

    cout<<k;

    return 0;
}