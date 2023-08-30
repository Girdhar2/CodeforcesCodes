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

bool solve() {
    ll n1, n2 ;
    cin>>n1>>c ;
    vpll vec1, vec2 ;
    rep(i, n1) {
        ll k ;
        cin>> k ;
        ll cnt = 1 ;
        while(k%c == 0) {
            cnt *= c ;
            k /= c ;
        }
        if(!vec1.size()) vec1.push_back(make_pair(k, cnt)) ;
        else {
            if(vec1.back().first == k) vec1.back().second += cnt ;
            else vec1.push_back(make_pair(k, cnt)) ;
        }
    }
    cin>>n2 ;
    vll b(n2) ;
    rep(i, n2) {
        ll k ;
        cin>> k ;
        ll cnt = 1 ;
        while(k%c == 0) {
            cnt *= c ;
            k /= c ;
        }
        if(!vec2.size()) vec2.push_back(make_pair(k, cnt)) ;
        else {
            if(vec2.back().first == k) vec2.back().second += cnt ;
            else vec2.push_back(make_pair(k, cnt)) ;
        }
    }
    if(vec1.size() != vec2.size()) return 0 ;
    for(ll i=0; i<vec1.size(); i++) {
        if(vec1[i] != vec2[i]) return 0 ;
    }
    return 1 ;
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