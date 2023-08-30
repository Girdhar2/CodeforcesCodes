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

ll check(ll** a, ll i, ll j, ll n, ll m, bool** b, ll** k) {
    if(k[i][j] != -1)
        return k[i][j] ;
    int t = 0 ;
    b[i][j] = true ;
    ll s1=0, s2=0, s3=0, s4=0 ;
    if(i>0 && a[i-1][j] > a[i][j] ) {
        s1 = check(a, i-1, j, n, m, b, k) ;
        t++ ;
    }
    if(j+1<m && a[i][j+1] > a[i][j]) {
        s2 = check(a, i, j+1, n, m, b, k) ;
        t++ ;        
    }
    if(i+1<n && a[i+1][j] > a[i][j]) {
        s3 = check(a, i+1, j, n, m, b, k) ;
        t++ ;
    }
    if(j>0 && a[i][j-1] > a[i][j]) {
        s4 = check(a, i, j-1, n, m, b, k) ;
        t++ ;
    }
    b[i][j] = false ;
    if(t == 0) {
        k[i][j] = 0 ;
        return 0 ;
    }
    k[i][j] = max(max(s1, s2), max(s3, s4)) + 1 ;
    return k[i][j] ;
}

void solve() {
    ll n, m ;
    cin>>n>>m ;
    ll** a = new ll*[n] ;
    rep(i, n) {
        a[i] = new ll[m] ;
        rep(j, m) {
            cin>>a[i][j] ;
        }
    }
    ll** k = new ll*[n] ;
    rep(i, n) {
        k[i] = new ll[m] ;
        rep(j, m) {
            k[i][j] = -1 ;
        }
    }
    bool** b = new bool*[n];
    rep(i, n) {
        b[i] = new bool[m] ;
        for(ll j=0; j<m; j++) {
            b[i][j] = false ;
        }
    }
    ll t = INT_MIN ;
    for(ll i=0; i<n; i++) {
        for(ll j=0; j<m; j++) {
            ll s = check(a, i, j, n, m, b, k) ;
            if(s > t)
                t = s ;
        }
    }
    cout<<t<<endl ;
}

int main(){
    ll t=1;
    //cin>>t ;
    while(t--){
        solve();
    }
}