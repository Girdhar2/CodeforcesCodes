#include<bits/stdc++.h>

using namespace std;


bool helper(){
    long long n ;
    cin>>n ;
    long long a[n] ;
    for(int i=0; i<n; i++ ){
        cin>>a[i] ;
    }
    sort(a, a+n) ;
    long long k=n/2 + 1 ;
    long long s1=0, s2=0 ;
    int i=2, j=n-2 ;
    s1 = a[0] + a[1] ;
    s2 = a[n-1] ;
    if(s1 < s2)
        return true ;
    
    while( i<k && j>=k ) {
        s1 += a[i] ;
        s2 += a[j] ;
        i++ ;
        j-- ;

        if(s1 < s2)
            return true ;

    }
   return false ;
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