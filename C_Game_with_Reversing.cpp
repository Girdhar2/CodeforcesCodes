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
    ll n, t1=0, t2=0, ans1=0,  ans2=0 ;
    cin>>n ;
    string s1, s2 ;
    cin>>s1>>s2 ;
    for(int i=0; i<n; i++) {
        if(s1[i] != s2[i]) t1++ ;
        if(s1[i] != s2[n-i-1]) t2++ ;
    }
    if(!t1) {
        cout<<0<<endl ;
        return ;
    }
    if(!t2) {
        cout<<2<<endl ;
        return ;
    }
    if(t1%2==1) {
        ans1 = t1*2-1 ;
    }
    else ans1 = t1*2 ;
    if(t2%2==1) ans2 = t2*2 ;
    else ans2 = t2*2-1 ;
    cout<<min(ans1, ans2)<<endl ; 
}


int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
}