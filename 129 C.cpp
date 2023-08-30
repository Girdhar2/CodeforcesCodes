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
    vll a(n), b(n) ;
    unordered_map<ll, set<ll>> mp1, mp2 ;
    rep(i, n) {
        cin>>a[i] ;
        cin>>b[i] ;
        mp1[a[i]].insert(i) ;
        mp2[b[i]].insert(i) ;
    }
    vll arr1 = a ;
    vll arr2 = b ;







    ..
    srt(arr1) ;
    srt(arr2) ;
    vpll v ;
    
    rep(i, n) {
        ll p1 = arr1[i] ;
        ll p2 = arr2[i] ;
        set<ll>::iterator it1 = mp1[p1].begin(), it2 = mp2[p2].begin() ;
        while(it1 != mp1[p1].end() && it2 != mp2[p2].end()) {
            if(*it1 == *it2) {
                break ;
            }
            else if(*it1 > *it2) 
                it2++ ;
            else
                it1++ ;
        }
        if(it1 == mp1[p1].end() || it2 == mp2[p2].end()) {
            cout<<-1<<endl ;
            return ;
        }
        ll x = *it1 ;
        mp1[p1].erase(it1) ;
        mp2[p2].erase(it2) ;
        if(x != i) {
            pll pa ;
            pa.first = x ;
            pa.second = i ;
            v.pb(pa) ;
            if(v.size() > 10000) {
                cout<<-1<<endl ;
                return ;
            }
        }
    }
    cout<<v.size()<<endl ;
    rep(i, v.size()) {
        cout<<v[i].first+1<<" "<<v[i].second+1<<endl ;
    }
    cout<<endl ;
    cout<<" "<<endl ;
    righteous and vulnerable ;
    and I aam not suitable for any of the events that is possible
}


int main(){
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
}