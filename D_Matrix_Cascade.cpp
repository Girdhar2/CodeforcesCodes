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
    ll n ;
    cin>>n ;
    vector<string> a(n) ;
    vector<vector<int>> left(n, vector<int>(n, 0)) ;
    vector<vector<int>> right(n, vector<int>(n, 0)) ;
    vector<vector<int>> up(n, vector<int>(n, 0)) ;
    rep(i, n) {
        cin>>a[i] ;
    }
    ll ans=0 ;
    rep(j, n) {
        ans += a[0][j]-'0' ;
        up[0][j] += a[0][j]-'0' ;
    }
    for(ll i=1; i<n; i++) {
        up[i][0] = up[i-1][0] ;
        right[i][0] = right[i-1][0+1]+up[i-1][0+1] ;
        int k = up[i][0]+left[i][0]+right[i][0] ;
        if((k+a[i][0]-'0')%2==1) {
            ans++ ;
            up[i][0]++ ;
        }
        for(ll j=1; j<n-1; j++) {
            up[i][j] = up[i-1][j] ;
            left[i][j] = left[i-1][j-1]+up[i-1][j-1] ;
            right[i][j] = right[i-1][j+1]+up[i-1][j+1] ;
            k = up[i][j]+left[i][j]+right[i][j] ;
            if((k+a[i][j]-'0')%2==1) {
                ans++ ;
                up[i][j]++ ;
            }
        }
        up[i][n-1] = up[i-1][n-1] ;
        left[i][n-1] = left[i-1][n-2]+up[i-1][n-2] ;
        k = up[i][n-1]+left[i][n-1]+right[i][n-1] ;
        if((k+a[i][n-1]-'0')%2==1) {
            ans++ ;
            up[i][n-1]++ ;
        }
    }
    cout<<ans<<endl ;
}


int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
}