#include<iostream>

using namespace std;

int main(){

    long long a[4],i,t=0,j;

    for(i=0;i<4;i++){

        cin>>a[i];

        for(j=0;j<i;j++){
            if(a[i]==a[j]){
                t++;
                break;
            }
        }

        if(j!=i)
        a[i]=0;
    }

    cout<<t;

    return 0;
}