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

pll good(string a, ll k, ll n) {
    ll i ;
    for(i=k+1; i<n; i++) {
        if(a[i] == ')')
            break ;
    }
    pll pa ;
    if(i == n) {
        pa.ff = 0;
        pa.ss = n ;
    }
    else {
        pa.ff = 1 ;
        pa.ss = i-k+1 ;
    }
    return pa ;
}
 
void solve(){
    ll n, c ;
    cin>>n>>c ;
    ll c[n], d[n], h[n] ;
    rep(i, n) {
        cin>>c[i]>>d[i]>>h[i] ;
    }
    ll m ;
    cin>>m;
    ll D[m], H[m] ;
    rep(i, m) {
        cin>>D[i] >>H[i] ;
    }
    
}
 
int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
}