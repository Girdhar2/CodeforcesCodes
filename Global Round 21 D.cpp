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

int dfs(bool** edges, bool *visited, ll f, ll s, ll n ) {
    visited[f] = true ;
    ll x = INT_MAX ;
    if(edges[f][s])
        return 1 ;
    for(ll i=0; i<n; i++) {
        if(edges[f][i] && !visited[i]) {
            ll a = dfs(edges, visited, i, s, n) ;
            if(a < x) {
                x = a ;
            }
        }
    }
    visited[f] = false ;
    return x ;
}

void solve() {
    ll n ;
    cin>>n ;
    vll a(n) ;
    rep(i, n) {
        cin>>a[i] ;
    }
    bool **edges = new bool*[n] ;
    for(int i=0; i<n; i++) {
        edges[i] = new bool[n] ;
        for(int j=0; j<n; j++) {
            edges[i][j] = false ;
        }
    }
    for(ll i=0; i<n-1; i++) {
        if(a[i] > a[i+1]) {
            ll mn = a[i+1] ;
            ll j = i+1 ;
            while(j<n && a[j] <= mn) {
                edges[i][j] = true ;
                edges[j][i] = true ;
                j++ ;
            }
        }
        else {
            ll mx = a[i+1] ;
            ll j = i+1 ;
            while(j<n && a[j] >= mx) {
                edges[i][j] = true ;
                edges[j][i] = true ;
                j++ ;
            } 
        }
    }
    bool *visited = new bool[n] ;
    for(int i=0; i<n; i++) {
        visited[i] = false ;
    }
    cout<<dfs(edges, visited, 0, n-1, n)<<endl ; 
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
}