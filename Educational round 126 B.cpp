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

unordered_map<ll, ll> map ;

void fast()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}

void solve(){
    ll n ;
    cin>>n ;
    if(map[n].count() > 0) {
        cout<<map[n]<<" " ;
        return ;
    }
    ll a = n ;
    ll count = 0 ;
    while(a % 2 == 0) {
        a /= 2 ;
        count++ ;
    }
    if(count > 3) {
        cout<<15-count<<" " ;
        return ;
    }
    ll t = INT_MAX ;
    for(int i=0; i<15; i++) {
        ll cnt = 0 ;
        a = n+i ;
        if(map[n+i].count() > 0) {
            if(t > map[n+1] + i){
                t = map[n+i] + i ;
            }
        }
        else {
            while(a%2 == 0) {
            a /= 2 ;
            cnt++ ;
        }
        if(t > 15-cnt+i) {
            t = 15-cnt+i ;
        }
        }
    }
    map[n] = t ;
    cout<<t<<" " ;
}


int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}