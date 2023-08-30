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

ll first(ll* a, ll index, ll n, ll* arr) {
    if(index == n-1)
        return 0 ;
    else if(index >= n)
        return -1 ;
    
    ll x = -1 ;

    if(arr[index] != -2) 
        return arr[index] ;

    for(ll i=1; i<=a[index]; i++) {
        ll t = (a, index+i, n, arr) + 1 ;
        if(t != 0){
            if(x > t || x == -1) {
                x =  t ;
            }
        }
    }
    arr[index] = x ;
    return x ;
}
ll second(ll* a, ll index, ll* arr) {
    if(index == 0)
        return 0 ;
    if(index < 0)
        return -1 ;

    if(arr[index] != -2)
        return arr[index] ;

    ll x = -1 ;
    
    for(int i=1; i<=a[index]; i++) {
        ll t = second(a, index-i, arr) + 1 ;
        if(t != 0) {
            if(t < x || x == -1) {
                x = t ;
            }
        }
    }
    arr[index] = x ;
    return x ;
}

void solve(){
    ll n ;
    cin>>n ;
    ll a[n] ;
    rep(i, n) {
        cin>>a[i] ;
    }
    ll arr[n] ;
    rep(i, n) {
        arr[i] = -2 ;
    }
    arr[n-1] = 0 ;
    ll x = first(a, 0, n, arr) ;
    rep(i, n) {
        arr[i] = -2 ;
    }
    arr[0] = 0 ;
    ll y = second(a, n-1, arr) ;
    
    if(x==-1 || y==-1) {
        cout<<-1<<endl ;
        return ;
    }
    cout<<x+y<<endl ;
}


int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
}