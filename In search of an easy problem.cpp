#include<iostream>

using namespace std;

int main(){

    int n,i,k;
    cin>>n;

    for(i=0;i<n;i++){

        cin>>k;

        if(k==1){
            cout<<"HARD";
            break;
        }
    }

    if(i==n)
    cout<<"EASY";

    return 0;
}