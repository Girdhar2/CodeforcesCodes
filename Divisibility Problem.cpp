#include<iostream>

using namespace std;

int main(){

    long long t,i,j=0,a,b;
    
    cin>>t;

    for(i=0;i<t;i++){

        cin>>a>>b;

        long long t=0;

        while (j=0){
            if(a%b==0)
            j++;

            else {
                a++;
                t++;
            }
        }

        cout<<t<<endl;
    }

    return 0;
}