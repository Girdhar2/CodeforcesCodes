#include<iostream>

using namespace std;

int main(){
    int n,h,a,k=0;
    cin>>n>>h;
    for(int i=0;i<n;i++){
        cin>>a;
        if(a>h)
        k += 2;
        else
        k++;
    }

    cout<<k;
    
    return 0;
}