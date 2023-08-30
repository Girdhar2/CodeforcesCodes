#include<bits/stdc++.h>

using namespace std;

long long d = INT_MAX ;

void subset(vector<long long> a, long long index, long long n, long long sum, long long ans ) {
    if(index == -1) {
        if(sum == n) {
            if(d > ans)
                d = ans ;
        }
        return ;
    }
    subset(a, index-1, n, sum, ans) ;
    subset(a, index-1, n, sum+a[index], ans+1 ) ;
}

void helper(){
    long long n;
    cin>>n ;
    vector<long long> power;
    vector<long long> fact ;
    long long i = 1, j=2 ; 
    while(i <= n) {
        power.push_back(i) ;
        i *= 2 ;
    }
    if(n > 1000000000) {
        if(n == power[power.size()-1])
        cout<<1<<endl;
        else 
        cout<<-1<<endl;
        return ;
    }
    i = 1 ;
    while(i <= n) {
        fact.push_back(i) ;
        i *= j ;
        j++ ;
    }
    vector<long long> a ;
    i=0 ;
    j=0;
    while(i < power.size() && j < fact.size() ) {
        if(power[i] < fact[j])  {
            a.push_back(power[i]) ;
            i++ ;            
        }
        else if(power[i] > fact[j] ) {
            a.push_back(fact[j]) ;
            j++ ;
        }
        else {
            a.push_back(fact[j]) ;
            i++;
            j++ ;
        }
    }
    while(i<power.size()) {
        a.push_back(power[i]) ;
        i++;
    }
    while(j<fact.size()) {
        a.push_back(fact[j]) ;
        j++ ;
    }

    for(int i=1; i<=a.size(); i++) {

    }

    long long b = 0;
    subset(a, a.size()-1, n, 0, b ) ;

    if(d != INT_MAX)
        cout<<d<<endl ;
    else
        cout<<-1<<endl ;    

}


int main(){
    int t;
    cin>>t;
    while(t--){
        helper() ;
        d = INT_MAX ;
    }
    return 0 ;
}