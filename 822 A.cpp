#include <bits/stdc++.h>

#define vpll vector<pair<ll, ll>>
#define pll pair<ll, ll>
#define rep(i, n) for (ll i = 0; i < n; i++)
#define forl(i, a, b) for (ll i = a; i < b; i++)
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
#define pyes cout << "YES" << endl
#define pno cout << "NO" << endl
#define pie 3.141592653589793238462643383279

using namespace std;
void fast()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

/*void helper(ll n, ll m, char b, char g)
{
    ll a = n / (m + 1);
    ll r = n % (m + 1);
    for (int i = 1; i <= m; i++)
    {
        rep(i, a) cout << b;
        if (i <= r)
            cout << b;
        cout << g;
    }
    rep(i, a) cout << b;
}*/

/*void solve()
{
    ll n;
    cin >> n;
    vll a(n);
    rep(i, n)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    ll i = 0, j = n / 2, ans = (n + 1) / 2;
    while (i < n / 2 && j < n)
    {
        while (j < n && a[j] < 2 * a[i])
            j++;
        if (j == n)
            break;
        i++;
        j++;
    }
    cout << ans + n / 2 - i << endl;
}*/

int main()
{
    ll t = 1;
    cin >> t;
    while (t--)
    {
        cout << 1 << " ";
        // solve();
    }
}