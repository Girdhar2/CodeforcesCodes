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
    ll a[n] ;
    rep(i, n) {
        cin>>a[i] ;
    }
    ll arr[n] ;
    arr[n-1] = 0 ;
    for(ll i=n-2; i>=0; i--) {
        ll x = -1 ;
        for(ll j=1; j<=a[i]; j++) {
            if(i+j < n && arr[i+j] != -1) {
                ll t = arr[i+j] + 1 ;
                if(t < x || x == -1)
                    x = t ; 
            }
        }
        arr[i] = x ;
    }
    ll ar[n] ;
    ar[0] =  0 ;
    for(ll i=1; i<n; i++) {
        ll x = -1 ;
        for(ll j=1; j<=a[i]; j++) {
            if(i-j >= 0 && ar[i-j] != -1) {
                ll t = ar[i-j] + 1 ;
                if(t < x || x == -1) {
                    x = t ;
                }
            }
        }
        ar[i] = x ;
    }
    if(arr[0]==-1 || ar[n-1]==-1) {
        cout<<-1<<endl ;
        return ;
    }
    cout<<arr[0]+ar[n-1]<<endl ;
}


int main(){
    ll t = 1;
    //cin>>t;
    while(t--){
        solve();
    }
}
int main() {
    int n, e ;
    cin>>n>>e ;
    int **edges = new int*[n] ;
    for(int i=0; i<n; i++) {
        edges[i] = new int[n] ;
        for(int j=0; j<n; j++) {
            edges[i][j] = 0 ;
        }
    }
    for(int i=0; i<n; i++) {
        int f, s ;
        cin>>f>>s ;
        edges[f][s] = 1 ;
        edges[s][f] = 1 ;
    }
    bool* visited = new bool[n] ;
    bool* visited = new bool[n] ;
    

    for(int i=0; i<n;i ++) {
        visited[i] = 0 ;
    }
}