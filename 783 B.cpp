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

bool solve(){
    ll n, m ;
    cin>>n>>m ;
    ll a[n] ;
    rep(i, n) {
        cin>>a[i] ;
    }
    if(2*n > m){
        return false ;
    }
    ll i = 0 , index = 0;
    while(index < n) {
        i += a[index] + 1 ;
        if(i >= m-1)
            return false ;
        index++ ;
    }
    
    ll p = m-i+1 ;
    if(p > a[0] && p > a[n-1])
        return true ;
    
    return false ;
}
 
int main(){
    ll t;
    cin>>t;
    while(t--){
        if(solve())
            pyes ;
        else
            pno ;
    }
}