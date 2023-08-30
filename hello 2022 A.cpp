#include<iostream>

using namespace std;

void helper(){
    long long n,k;
    cin>>n>>k;
    if((n%2==0 && k<=n/2) || (n%2==1 && k<= n/2 + 1)){
        for(int i=1;i<=n;i++){
            if(i<2*k){
            if(i%2==0){
                for(int j=0;j<n;j++){
                    cout<<".";
                }
                cout<<endl;
            }
            else{
                for(int j=1;j<=n;j++){
                    if(j==i)
                    cout<<"R";
                    else
                    cout<<".";
                }
                cout<<endl;
            }
        }
        else{
            for(int j=0;j<n;j++){
                    cout<<".";
                }
                cout<<endl;
        }
        }
    }
    else
    cout<<-1<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        helper();
    }
}