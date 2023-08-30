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
    ll n , m ;
    cin>>n>>m ;
    ll a[n][m] ;
    rep(i, n) {
        rep(j, m) {
            cin>>a[i][j] ;
        }
    }
    vector<vll> pr(n) ;
    for(int i=0; i<n; i++) {
        ll cnt = 0 ;
        for(int j=1; j<m; j++) {
            if(a[j-1] > a[j]) {
                cnt++ ;
                pr[i].pb(j-1) ;
            }
        }
        if(cnt > 2) {
            cout<<-1<<endl ;
            return ;
        }
    }
    ll i = 0 ;
    while(i<n && !pr[i].size()) {
        i++ ;
    }
    if(i == n) {
        cout<<1<<1<<endl ;
        return ;
    }
    ll x = 1, y = 1 ;
    if(pr[i].size() == 2) {
        x = pr[i][0] ;
        y = pr[i][1] + 1 ;
    }
    else {
        x = pr[i][0] ;
        y = x+1 ;
    }
    for(i=0; i<n; i++) {
        ll c = a[i][x] ;
        a[i][x] = a[i][y] ;
        a[i][y] = c ;
        for(ll j=1; j<m; j++) {
            if(a[j-1] > a[j]) {
                cout<<-1<<endl ;
                return ;
            }
        }
    }
    cout<<x+1<<y+1<<endl ;
    return ;
}



int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
}