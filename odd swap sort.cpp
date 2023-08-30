#include<bits/stdc++.h>
 
using namespace std;
 
 
bool helper(){
    long long n;
    cin>>n;
    long long a[n] ;
    for(int i=0; i<n; i++) {
        cin>>a[i] ;
    }
    int j = 0 ;
    while(j) {
        j = 0 ;
        for(int i=0; i<n-1; i++) {
            if(a[i] > a[i+1] ) {
                if((a[i]+a[i+1])%2 == 0)
                    return false ;
                else {
                    long long c = a[i] ;
                    a[i] = a[i+1] ;
                    a[i+1] = c ;
                    j++ ;
                    }
            }
        }
    }
    return true ;
}
 
 
int main(){
    long long t;
    cin>>t;
    while(t--){
        bool a = helper();
        if(a)
           cout<<"YES"<<endl;
        else
           cout<<"NO"<<endl;
    }
}