#include<iostream>
#include<vector>

using namespace std;

int main(){

    int n,p,q,i,a[100],t=0;

    cin>>n>>p;
    
    for(i=0;i<p;i++){

        cin>>a[i];
    }

    cin>>q;

    for(i=p;i<p+q;i++){
        cin>>a[i];
    }

    for(i=1;i<=n;i++){
      for(int j=0;j<p+q;j++){
        if(a[j]==i){
            t++;
            break;
        }
      }
    }

    if(t==n)
    cout<<"I become the guy.";
    else
    cout<<"Oh, my keyboard!";

    return 0;
}