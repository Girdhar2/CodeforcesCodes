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
    ll n, k, x, t=0 ;
    cin>>n>>k>>x ;
    if(x==1) {
    if(x==1 && k==1) {
        cout<<"NO"<<endl ;
        return ;
    }
    if(x==1 && k==2 && n%2==1) {
        cout<<"NO"<<endl ; 
        return ;
    }
    if(x==1 && n==1) {
        cout<<"NO"<<endl ; 
        return ;
    }
    cout<<"YES"<<endl ;
    if(k==2) {
        cout<<n/2<<endl ;
        rep(i, n/2) cout<<2<<" " ;
        cout<<endl ;
    }
    else {
        vector<int> ans ;
        while(n%3 != 0) {
            n-=2 ;
            ans.push_back(2) ;
        } 
        cout<<n/3+ans.size()<<endl ;
        rep(i, ans.size()) cout<<2<<" " ;
        rep(i, n/3) cout<<3<<" " ;
        cout<<endl ;
    }
    }
    else {
    cout<<"YES"<<endl<<n<<endl ;
    rep(i, n) cout<<1<<" " ;
    cout<<endl ;
    }
    
}


int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
}