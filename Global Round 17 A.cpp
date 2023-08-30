#include<iostream>

using namespace std;

int main(){
    long long i,m,n,t;
    
    cin>>t;

    for(i=0;i<t;i++){
        cin>>n>>m;
        if(n<3 || m<3){
        if(n<m)
        cout<<n<<endl;
        else
        cout<<m<<endl;
    }
    else
    cout<<3<<endl;
    }

    return 0;
}