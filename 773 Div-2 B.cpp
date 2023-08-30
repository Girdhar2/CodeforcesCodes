#include<bits/stdc++.h>

using namespace std;


void helper(){
    long long n;
    cin>>n;
    long long a[n] ;
    unordered_set<long long> intset ;

    for(long long i=0; i<n; i++) {
        cin>>a[i] ;
        intset.insert(a[i]) ;
    }

    for(int i=0; i<intset.size(); i++) {
        cout<<intset.size() <<" " ;
    }
    for(i=intset.size(); i<n; i++) {
        cout<<i+1 <<" " ;
    }
    cout<<endl ;

}


int main(){
    int t;
    cin>>t;
    while(t--){
        if(helper())
            cout<<"Yes"<<endl ;
        else 
            cout<<"No"<<endl ;    
    }
}