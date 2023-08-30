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
    ll n,m ;
    cin>>n>>m ;
    if(n == m || n==m-1 || n-1 == m) {
        cout<<n+m-2<<endl ;
        return ;
    }
    ll a = min(n, m) ;
    if(a == 1) {
        cout<<-1<<endl ;
        return ;
    }
    ll k = n+m-a ;
    ll t = 2*a - 1 ;
    ll d = k-a-1 ;
    ll p ;
    if(d%2 == 1) {
        p = 2*(d-1) + 3 ;
    }
    else {
        p = 2*d ;
    }
    t += p ;
    cout<<t<<endl ;
}


int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
}