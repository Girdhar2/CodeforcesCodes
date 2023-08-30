#include<bits/stdc++.h>

using namespace std;


void helper(){
    long long n, x;
    cin>>n>>x;
    long long a[n] ;

    for(long long i=0; i<n; i++) {
        cin>>a[i] ;
    }

    sort(a, a+n) ;
    long long s = 0 ;

    for(long long i=0; i<n; i++) {
        if(a[i]!= INT_MIN) {
            int t = 0 ;
            for(long long j=i+1; j<n; j++) {
                if(a[j]!= INT_MIN) {
                    if(a[j] == x*a[i]){
                        a[j] = INT_MIN ;
                        t = 1 ;
                        break ;
                    }
                    else if(a[j] > x*a[i])
                    break ;
                }
            }
            s += 1 - t ;
        }
    }
    cout<<s<<endl ;

}


int main(){
    int t;
    cin>>t;
    while(t--){
        helper();
    }
    string s ;
    cin>>s ;
    for(int i=0; i<s.size(); i++) {

    }
}