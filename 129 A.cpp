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

void solve() {
    ll n , t = INT_MIN, k = INT_MIN ;
    cin>>n ;
    ll a[n] ;
    rep(i, n) {
        cin>>a[i] ;
        if(t < a[i])
            t = a[i] ;
    }
    ll m ;
    cin>>m ;
    ll b[m] ;
    rep(i, m) {
        cin>>b[i] ;
        if(k < b[i])
            k = b[i] ;
    }
    if(t > k) {
        cout<<"Alice"<<endl ;
        cout<<"Alice"<<endl ;
    }
    else if(t < k ) {
        cout<<"Bob"<<endl ;
        cout<<"Bob"<<endl ;
    }
    else {
        cout<<"Alice"<<endl ;
        cout<<"Bob"<<endl ;
    }
}


int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
}