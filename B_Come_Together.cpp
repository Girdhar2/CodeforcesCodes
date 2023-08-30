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
    ll ans=1, k=0;
    vector<vll> a(3, vll(2)) ;
    rep(i, 3) {
        rep(j, 2) {
            cin>>a[i][j] ;
        }
    }
    int t1=a[1][0]-a[0][0] , t2=a[1][1]-a[0][1] , p1=a[2][0]-a[0][0], p2=a[2][1]-a[0][1] ;
    if(t1>0 && p1>0) ans += min(t1, p1), k++ ;
    if(t1<0 && p1<0) ans -= max(t1, p1), k++ ;
    if(t2>0 && p2>0) ans += min(t2, p2), k++ ;
    if(t2<0 && p2<0) ans -= max(t2, p2), k++ ;
    if(k==2) ans-- ;
    cout<<ans<<endl ;
}


int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
}