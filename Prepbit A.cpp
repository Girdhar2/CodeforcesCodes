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

int helper(int n, int k, int** dp) {
    if(n < 0) return 0 ;
    if(n==0) return 1 ;
    if(dp[n][k] != -1) return dp[n][k];
    long long ans = 0 ;
    if((k+1)%6 != 0) ans += helper(n-1, 1, dp) ;
    if((k+2)%6 != 0) ans += helper(n-2, 2, dp) ;
    if((k+3)%6 != 0) ans += helper(n-3, 3, dp) ;
    if((k+5)%6 != 0) ans += helper(n-5, 5, dp) ;
    if((k+7)%6 != 0) ans += helper(n-7, 7, dp) ;
    ans %= 1000000007 ;
    dp[n][k] = (int) ans ;
    return (int) ans;
}

bool solve() {
    int n;
    cin>>n ;
    int** dp = new int*[n+1];
    for(int i=0; i<=n; i++) {
        dp[i] = new int[8];
        for(int j=0; j<8; j++) {
            dp[i][j] = -1 ;
        }
    } 
    int ans = helper(n-1, 1, dp) + helper(n-2, 2, dp) + helper(n-3, 3, dp) + helper(n-5, 5, dp) + helper(n-7, 7, dp) ;
    cout<<ans<<endl ;
}


int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
}