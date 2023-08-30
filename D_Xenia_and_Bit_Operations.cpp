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
    ll n, m ;
    cin>>n>>m ;
    ll p = powl(2, n) ;
    vll a(p) ;
    rep(i, p) {
        cin>>a[i] ;
    }
    vector<vll> dp ;
    dp.push_back(a) ;
    rep(i, n) {
        vll b ;
        p /= 2 ;
        if(i%2==0) rep(j, p) b.push_back(dp[i][j*2] | dp[i][j*2+1]) ; 
        else rep(j, p) b.push_back(dp[i][j*2] ^ dp[i][j*2+1]) ;
        dp.push_back(b) ;
    }
    rep(k, m) {
        ll t, b ;
        cin>>t>>b ;
        t -= 1 ;
        dp[0][t] = b ; 
        rep(i, n) {
            dp[i+1][t/2] = dp[i][t] ;
            if(i%2==0) {
                if(t%2==0) dp[i+1][t/2] |= dp[i][t+1] ;
                else dp[i+1][t/2] |= dp[i][t-1] ;
            } 
            else {
                if(t%2==0) dp[i+1][t/2] ^= dp[i][t+1] ;
                else dp[i+1][t/2] ^= dp[i][t-1] ;
            }
            t/=2 ;
        }
        cout<<dp[n][0]<<endl ;
    }
}


int main(){
    ll t=1;
    //cin>>t;
    while(t--){
        solve();
    }
}