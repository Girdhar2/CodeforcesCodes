#include<iostream>

using namespace std;

int main(){

    int n,i;
    cin>>n;

    for(i=1;i<2*n;i++){
        if(i%4==1)
        cout<<"I hate ";
        else if(i%4==3)
        cout<<"I love ";
        else
        cout<<"that ";
    }

    cout<<"it";

    return 0;
}