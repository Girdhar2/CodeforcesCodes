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
    ll a, b, c ;
    cin>>a>>b>>c ;
    ll mn = min(a, min(b, c)) ;
    ll mx = max(a, max(b, c)) ;
    ll md = a+b+c-mx-mn ;
    mx -= mn ;
    md -= mn ; 
    if(mn>0 && (mx+1)%3==0 && (md+1)%3==0) mn+=1 ;
    mn += mx/3 + md/3 ;
    cout<<mn<<endl ;
}


int main(){
    ll t=1;
    //cin>>t;
    while(t--){
        solve();
    }
}