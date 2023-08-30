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
    ll n ;
    cin>>n ;
    ll a[n-1] ;
    bool ar[n-1] ;
    ll t = 0 ;
    n -= 1 ;
    rep(i, n) {
      ar[i] = false ;
    }
    rep(i, n) {
        cin>>a[i] ;
        if(!ar[a[i]-1]) {
          ar[a[i]-1] = true ;
          t++ ;
        }
    }
    t += 1 ;
    ll count = t ;
    t *= 2 ;
    n += 1 ;
    if(n >= t) {
        t = n-t+1 ;
        if(t % 2 == 0) 
            t /= 2 ;
        else 
            t = (t/2)+1 ;
        count += t ;
    }
    cout<<count<<endl ;
}

int main(){
    fast() ;
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}