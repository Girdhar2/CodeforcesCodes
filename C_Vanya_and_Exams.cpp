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
    ll n, r, avg, x=0, ans=0 ;
    cin>>n>>r>>avg ;
    vpll a(n) ;
    rep(i, n) {
        cin>>a[i].second>>a[i].first ;
        x += a[i].second ;
    }
    srt(a) ;
    avg *= n ;
    ll i=0 ;
    while(x < avg) {
        if(a[i].second < r) {
            if(r-a[i].second <= avg-x) {
                ans += (r-a[i].second)*a[i].first ;
                x += r-a[i].second ;
            }
            else {
                ans += (avg-x)*a[i].first ;
                x = avg ;
            }
        }
        i++ ;
    }
    cout<<ans<<endl ;
}


int main(){
    ll t=1;
    //cin>>t;
    while(t--){
        solve();
    }
}