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
    ll n, m, b, c, k=0, ans=0 ;
    cin>>n>>m ;
    vll a(n), s(n, 0), e(n, 0), cnt;
    rep(i, n) {
        cin>>a[i] ;
    }
    rep(i, m) {
        cin>>b ;
        cin>>c ;
        s[b-1]++ ;
        e[c-1]++ ;
    }
    rep(i, n) {
        k += s[i] ;
        cnt.push_back(k) ;
        k -= e[i] ;
    }
    srt(a) ;
    srt(cnt) ;
    rep(i, n) ans += a[i]*cnt[i] ;
    cout<<ans<<endl ;
}


int main(){
    ll t=1;
    //cin>>t;
    while(t--){
        solve();
    }
}