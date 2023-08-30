#include<iostream>
using namespace std;

bool rectangle(){
    int l1,l2,l3;
    cin>>l1>>l2>>l3;
    
    if(l1%2==1 && l2%2==1 && l3%2==1)
    return false;

    if(l1==l2 && l3%2==0)
    return true;
    else if(l3==l2 && l1%2==0)
    return true;
    else if(l1==l3 && l2%2==0)
    return true;

    if(l1==l2+l3)
    return true;
    else if(l2==l1+l3)
    return true;
    else if(l3==l2+l1)
    return true;

    return false;    

}

int main(){
    int t;
    cin>>t;
    while(t--){
     bool ans = rectangle() ;
     if(ans)
     cout<<"YES"<<endl;
     else
     cout<<"NO"<<endl;
    }
    return 0;
}