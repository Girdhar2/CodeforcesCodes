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
    ll a[n], b[n] ;
    rep(i, n) {
        cin>> a[n] ;
    }
    rep(i, n) {
        cin>>b[n] ;
    }
    ll d1 = a[0], d2= a[n-1] , d3 = b[0] , d4 = b[n-1] ;
    ll t1 = INT_MAX , t2 = INT_MAX, t3 = INT_MAX , t4 = INT_MAX ;
    rep(i, n)  {
        if(b[i] - d1 < t1)
            t1 = b[i] - d1 ;
        if(b[i] - d2 < t2)
            t2 = b[i] - d2 ;
    }
    rep(i, n) {
        if(a[i] - d3 < t3)
            t3 = a[i] - d3 ;
        if(a[i] - d4 < t4)
            t4 = a[i] - d4 ;
    }
    ll t = t1+t2+t3+t4 ;
    ll s[4] ;
    if(d1 > d3)
        s[0] = d1-d3 +t2+t4 ;
    else
        s[0] = d3-d1+t2+t4 ;

    if(d1>d4)
        s[1] = d1-d4 + t2+t3 ;  
    else
        s[1] = d4-d1 + t2+t3 ;

    if(d2>d3)
        s[2] = d2-d3+t1+t4 ;
    else
        s[2] = d3-d2+t1+t4 ;

    if(d2>d4)
        s[3] = d2-d4 + t1+t3 ;
    else 
        s[3] = d4-d2 + t1+t3 ;      
    
    ll k = INT_MAX ;
    rep(i, n) {
        if(s[i] < k)
            k = s[i] ;
    }
    ll e[2] ;
    if(d1 > d3) {
        if(d2 > d4) 
            e[0] = d1-d3 + d2-d4 ;
        else
            e[0] = d1-d3 + d4-d2 ;
    }
    else {
        if(d2 > d4)
            e[1] = d3-d1 + d2-d4 ;
        else
            e[1] = d3-d1 + d4-d2 ;
    }
    ll c = min(e[0], e[1]) ;
    ll ans = min(t, min(k, c)) ;
    cout<<ans<<endl ;
}
 
int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
}