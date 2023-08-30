#include<bits/stdc++.h>

using namespace std;


void helper(){
    long long n;
    cin>>n;
    long long a[n] , ans[3] ;
    cin>>a[0] ;
    ans[0] = 0 ;
    ans[1] = 0 ;
    ans[2] = 0 ;
    for(int i=1; i<n; i++ ) {
        cin>>a[i];
        if(a[i] != a[0]) {
            if(a[i] != ans[1]) {
                if(a[1] == 0) {
                    a[1] = i ;
                }
                else {
                    a[2] = i ;
                    break ;
                }
            }
        }
    }
    if(ans[2] == 0) {
        cout<<-1<<" "<<-1<<" "<<-1<<endl ;        
    }
    int max = 0 ;
    int min = 0 ;

    for(int i = 1 ; i<3; i++) {
        if(a[max] < a[ans[i]])
        max = ans[i] ;

        if(a[min] > a[ans[i]])
        min = ans[i] ;
    }

    int i = 2 ;
    while(i > 0) {
        if(a[ans[i]] < a[max] && a[ans[i]] > a[min]) 
        break ;
        i-- ;
    }

    cout<<min+1 << " " << i+1 << " " << max+1 << endl ;
} 


int main(){
    int t;
    cin>>t;
    while(t--){
        helper();
    }
}