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

vector<pair<int, pair<int, int>> check(string s, vector<string> a, int index, vector<pair<int, pair<int, int>> v, vector<bool> k) {
    if(index == a.size()) {
        vector<pair<int, pair<int, int>>> ans ;
        rep(i, a.size()) {
            if(!k) return ans ;
        }
        return v ;
    }
    string t = a[i] ;
    int n = a.size() ;
    for()
}

void solve(){
    string s ;
    cin>>s ;
    vector<bool> k(n, 0) ;
    ll n ;
    cin>>n ;
    vector<string> a(n);
    for(ll i=0; i<n; i++) {
        cin>>a[i] ;
    }
    vector<pair<int, pair<int, int>>> ans = check(s, a, 0, v, k) ;
}


int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
}