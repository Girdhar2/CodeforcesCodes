#include <bits/stdc++.h>
 
#define vpll vector<pair<ll, ll>>
#define pll pair<ll,ll>
#define rep(i, n) for (ll i = 0; i < n; i++)
#define forl(i, a, b) for(ll i=a;i<b;i++)
#define vll vector<ll>
#define ll long long
#define ld double
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define rev(v) reverse(v.begin(), v.end())
#define srt(v) sort(v.begin(), v.end())
#define grtsrt(v) sort(v.begin(), v.end(), greater<ll>())
#define mnv(v) *min_element(v.begin(), v.end())
#define mxv(v) *max_element(v.begin(), v.end())
#define mod 1000000007
#define endl '\n'
#define pyes cout<<"YES"<<endl
#define pno cout<<"NO"<<endl
#define pie 3.141592653589793238462643383279
 
using namespace std;
void fast()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

void solve(){
    ll n ;
    cin>>n ;
    vll a(n) ;
    rep(i, n) {
        cin>>a[i] ;
    }
    if(n%2 == 1) {
        cout<<"NO"<<endl ;
        return ;
    }
    srt(a) ;
    vll v ;
    ll i=0, j=n/2 ;
    while(i<n/2 && j<n) {
        v.pb(a[i]) ;
        v.pb(a[j]) ;
        i++ ;
        j++ ;
    }
    rep(i, n-1) {
        if(i%2==0) {
            if(v[i]>=v[i+1]) {
                cout<<"NO"<<endl ;
                return ;
            }
        }
        else {
            if(v[i] <= v[i+1]) {
                cout<<"NO"<<endl ;
                return ;
            }
        }
    }
    if(v[n-1] < v[0]) {
        cout<<"NO"<<endl ;
        return ;
    }
    cout<<"YES"<<endl ;
    rep(i, n) {
        cout<<a[i]<<" " ;
    }
    cout<<endl ;
}


int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
}