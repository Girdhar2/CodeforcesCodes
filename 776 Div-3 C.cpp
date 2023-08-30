#include<bits/stdc++.h>

using namespace std;


void helper(){
    long long n ;
    cin>>n ;
    long long a[n+1] ;
    unordered_map<long long , long long> map ;
    for(long long i=1; i<=n; i++) {
        cin>>a[i] ;
        map[a[i]] = i ;
    }
    int t=0 ;
    for(int i=n; i>0; i--) {
        long long t = map[i] ;
        if(t == i) {
            ans.push_back(0) ;
        }
        else {
            for(int j=1; j<i; j++) {
            map[j] -= t ;
            if(map[j] <= 0)
                map[j] += i ;    
        }
        ans.push_back(t) ;
        }
        for(int i=n-1; i>=0; i--) {
            cout<<ans[i]<<
        }
        
}


int main(){
    int t;
    cin>>t;
    while(t--){
        helper();
    }
}