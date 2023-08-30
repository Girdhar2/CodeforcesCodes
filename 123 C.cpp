#include<bits/stdc++.h>

using namespace std;


void helper(){
    long long n, k ;
    cin>>n>>k;
    long long a[n] ;
    
    for(int i=0; i<n; i++) {
        cin>>a[i] ;
    }
    long long s=0 , count ;
    sort(a, a + n, greater<int>());
    for(long long i=0; i<n; i++) {
        if(a[i] >= 0)
        s += a[i] ;
        else{
            count = i ;
            break ;
        } 
    }
    for(int j=0; j < count ; j++) {
        cout<<s<<" " ;
        s += k ;
    }
    for(int j=count, j<=n; j++ ) {
        s += a[j] ;
        cout<<s <<" ";
        s += k ;
    }
    cout<<endl ;
}


int main(){
    int t;
    cin>>t;
    while(t--){
        helper();
    }
}