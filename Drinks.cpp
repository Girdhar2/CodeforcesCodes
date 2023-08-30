#include<iostream>

using namespace std;

int main(){

    int n,i,p;
    double s=0;
    cin>>n;

    for(i=0;i<n;i++){
        cin>>p;
        s += p;
    }

    cout<<s/n;

    return 0;
}