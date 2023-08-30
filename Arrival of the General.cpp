#include<iostream>

using namespace std;

int main(){

    long n;
    cin>>n;

    long a[n],i,max=0,min=101,x,y;

    for(i=0;i<n;i++){
        cin>>a[n];
        if(a[i]<=min){
            min=a[i];
            y=i;
            cout<<i<<min;
        }
    }
    
    for(i=n-1;i>=0;i--){
        if(a[i]>=max){
            max=a[i];
            x=i;
        }
    }
    cout<<x<<" "<<y<<" ";

    if(x>y){
        cout<<x+n-y-2;
    }
    else
    cout<<x+n-y-1;

    return 0;
}