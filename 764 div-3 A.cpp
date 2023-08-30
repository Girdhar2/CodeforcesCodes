#include<iostream>
#include<climits>
#include<algorithm>

using namespace std;


void helper(){
    long long n;
    cin>>n;
    long long a[n], b = INT_MIN, c = INT_MAX;
    for(int i=0; i<n; i++ ) {
        cin>>a[i];
        b = max(b,a[i]) ;
        c = min(c,a[i]) ;
    }
    cout<<b-c<<endl;
}


int main(){
    int t;
    cin>>t;
    while(t--){
        helper();
    }
}