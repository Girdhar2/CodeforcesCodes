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

void solve() {
    ll n ;
    cin>>n ;
    vll a(n) ;
    rep(i, n) {
        cin>>a[i] ;
    }
    vll arr = a ;
    sort(arr.begin(), arr.end()) ;
    vll v ;
    v.push_back(1) ;
    for(ll i=1; i<n; i++) {
        if(arr[i] != arr[i-1])
            v.push_back(1) ;
        else
            v.back()++ ;
    }
    ll x = 0 , b[2], q=0 ;
    for(ll i=0; i<v.size()-1; i++) {
        if(v[i] == 1) { 
            b[q%2]++;
            q++ ;
        }
        else if(v[i] == 2) {
            b[0]++ ;
            b[1]++ ;
        }
        else if(v[i] > 2) {
            b[0]++ ;
            b[1]++ ;
            x = 1 ;
        }
    }
    if(x == 0 || v.back() > 1) {
        b[0]++ ;
        b[1]++ ;
    }
    else {
        b[q%2]++ ;
    }
    cout<<min(b[0], b[1])<<endl ;
}


int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
}