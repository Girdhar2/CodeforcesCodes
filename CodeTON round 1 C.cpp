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
    ll n;
    cin>>n ;
    ll a[n] , count = 0, count2 = 0 ;
    vll vec ;
    unordered_map<ll, bool> map ;
    rep(i, n) {
        cin>>a[i] ;
        if(a[i] == 1) {
            count = 1 ;
        }
        else if(a[i] == 0 || a[i] == 2)
            count2 = 1 ;
        else {
            vec.push_back(a[i]) ;
            map[a[i]] = true ;
        }
    }
    if(count == 0)
        return true ;
    if(count2 == 1)
        return false ;
    if(vec.size() == 0)
        return true ;
    srt(vec) ;
    for(int i=vec.size()-1; i>=0; i--) {
        if(map[vec[i]-1]) {
            if(vec[i]%2 == 0)
                return false ;
            else {
                ll t = 0 ;
                ll c = vec[i]-1 ;
                while(c %2 == 0) {
                    c /= 2 ;
                    if(!map.count(c)) {
                        t = 1 ;
                        break ;
                    }
                }
                if(t == 0)
                    return false ;
            }
        } 
    }
    return true ;
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