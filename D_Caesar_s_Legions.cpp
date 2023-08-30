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

ll helper(ll n1, ll n2, ll t1, ll t2, ll k1, ll k2, vector<vector<vector<vector<int>>>>& dp) {
    if(n1==0 && n2==0) return 1 ;
    ll ans=0 ;
    if(dp[n1][n2][t1][t2] != -1) return dp[n1][n2][t1][t2] ;
    if(n1>0 && t1<k1) ans += helper(n1-1, n2, t1+1, 0, k1, k2, dp) ; 
    if(n2>0 && t2<k2) ans += helper(n1, n2-1, 0, t2+1, k1, k2, dp) ;
    return dp[n1][n2][t1][t2] = ans%100000000 ;
} 

void solve(){
    ll n1, n2, k1, k2 ;
    cin>>n1>>n2>>k1>>k2 ;
    vector<vector<vector<vector<int>>>> dp(n1+1, vector<vector<vector<int>>> (n2+1, vector<vector<int>> (11, vector<int>(11, -1)))) ;
    cout<<helper(n1, n2, 0, 0, k1, k2, dp)<<endl ;
}


int main(){
    ll t=1;
    //cin>>t;
    while(t--){
        solve();
    }
}