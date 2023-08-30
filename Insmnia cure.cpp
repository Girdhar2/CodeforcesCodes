#include<iostream>

using namespace  std;

int main(){

    long k[4],d,i,b=0,j;

    cin>>k[0]>>k[1]>>k[2]>>k[3]>>d;

    long a[d] = {0};

    for(i=0;i<4;i++){
        if(k[i]<=d){
             for(j=k[i]-1;j<d;j += k[i]){
                 if(a[j] == 0){
                 b++;
                 a[j]++;
                }
            }
        }

  }  

    cout<<b;

    return 0;
}