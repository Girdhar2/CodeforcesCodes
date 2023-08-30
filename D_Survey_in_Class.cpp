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

bool myComparison(const vll &a, const vll &b) {
    return a[1]-a[0] < b[1]-b[0] ;
}

void solve(){
    ll n, m, t=0 ;
    cin>>n>>m ;
    vector<vll> a(n, vll(2)) ;
    vll mx(m, -1) ;
    rep(i, n) {
        cin>>a[i][0]>>a[i][1] ;
        mx[--a[i][0]] = --a[i][1] ;
    }
    rep(i, m) {
        if(t<i) t = max(t, mx[i]) ;
        else {
            mx[i] = max(mx[i], t) ;
            t = max(mx[i], t) ; 
             
        }
    }
    sort(a.begin(),a.end());
    int i=0, j=n-1 ;

}


int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
}