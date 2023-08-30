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

bool helper(ll& m, string& l, string& r, string& s, ll i, ll j, vector<vector<ll>>& dp) {
    int n = s.size() ;
    if(j>=m) return 0 ;
    if(i>=n) return 1 ;
    if(dp[i][j] != -1) return dp[i][j] ;
    ll u=l[j], v=r[j], p=INT_MAX ;
    for(ll k=u; k<=v; k++) {
        ll t=i ;
        while(s[t] != k && t<n) t++ ;
        if(helper(m, l, r, s, t+1, j+1, dp)) return dp[i][j] = true;
    }
    return dp[i][j] = false ;
}

bool solve(){
    string s, l, r ;
    cin>>s ;
    ll n = s.size() ;
    ll m, cnt=0 ;
    cin>>m>>l>>r ;
    vector<vector<ll>> dp(n, vll(m, -1)) ;
    return helper(m, l, r, s, 0, 0, dp) ;
}


int main(){
    ll t;
    cin>>t;
    while(t--){
        if(solve())
            pyes ;
        else
            pno ;
    }
}