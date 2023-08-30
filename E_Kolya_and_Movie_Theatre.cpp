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

ll helper(vll& a, ll i, ll& n, ll m, ll v, ll& d, vector<vector<vector<ll>>>& dp) {
    if(!m || i==n) return 0 ;
    if(dp[i][m][v] != -1) return dp[i][m][v] ;
    return dp[i][m][v] = max(helper(a, i+1, n, m, v+1, d, dp), helper(a, i+1, n, m-1, 1, d, dp) +a[i]-d*v) ;
}

void solve(){
    ll n, m, d ;
    cin>>n>>m>>d ;
    vll a(n) ;
    rep(i, n) {
        cin>>a[i] ;
    }
    vector<vector<vector<ll>>> dp(n, vector<vector<ll>>(m+1, vector<ll>(n+1, -1))) ;
    cout<<helper(a, 0, n, m, 1, d, dp)<<endl ;
}


int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
}