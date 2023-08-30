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
    ll n, x, t1=0, t2=0, t3=0, ans=0 ;
    cin>>n>>x ;
    vll a(n) ;
    rep(i, n) {
        cin>>a[i] ;
        if(a[i] > x) t3++ ;
        else if(a[i] == x) t2++ ;
        else t1++ ;
    }
    if(t2==0) {
        t2++ ;
        ans++ ;
    }
    if((t3>=t1 && t3-t1 <= t2) || (t1>t3 && t1-t3 < t2)) {
        cout<<ans<<endl ;
        return ;
    }
    else if(t3 > t1) ans += t3-t2-t1 ;
    else ans += t1-t3-t2+1 ;
    cout<<ans<<endl ;
}


int main(){
    ll t=1;
    //cin>>t;
    while(t--){
        solve();
    }
}