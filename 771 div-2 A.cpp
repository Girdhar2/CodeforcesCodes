#include<bits/stdc++.h>

using namespace std;


void helper(){
    long long n;
    cin>>n;
    long long a[n] , k = n;
    for(int i=0; i<n; i++) {
        cin>>a[i] ;
    }
    for(long long i=0; i<n; i++) {
        if(i+1 == a[i]) 
        cout<<a[i]<<" " ;
        else {
            long long j=1 ;
            while(a[i+j] != i+1) {
                j++ ;
            }
            k = i+j+1 ;
            for(j; j>=0; j--) {
                cout<<a[i+j]<<" " ;
            }
            break ;
        }
    }
    for(k; k<n; k++) {
        cout<<a[k]<< " " ;
    }
    cout<<endl ;
}


int main(){
    int t;
    cin>>t;
    while(t--){
        helper() ;
    }
    return 0 ;
}