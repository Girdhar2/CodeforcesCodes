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
    string s ;
    cin>>s ;
    vector<vll> arr(26) ;
    ll ans[25][2] ;
    rep(i, 25) {
        ans[i][0] = 0 ;
        ans[i][1] = 0 ;
    }
    for(ll i=n-1; i>=0; i--) {
        ll a = s[i]-'a' ;
        vec[a].push_back(i) ;
        if(a != 0){
            if(vec[a].size() == vec[0].size()){
                ans[a-1][0] = 
            }
        }
    }
}


int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
}