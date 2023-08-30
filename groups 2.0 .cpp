#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define lld long double
#define rep(i,n) for(int i=0;i<n;i++)
#define pb push_back
#define mp make_pair
#define vi vector<ll>

const int N=1e5 + 5;



void fast()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
}
void solve(int n){
        ll k,i,n,j,p,s[5] = {0},a[n+1][5];
        cin>>n;
        for(i=0;i<n;i++){
            for(j=0;j<5;j++){
                cin>>a[i][j];
                if(a[i][j]==1)
                s[j]++;
            }
        }
    for(i=0;i<5;i++){
        if(s[i]>=n/2)
        p++;
    }

    if(p>1)
    cout<<"YES"<<endl;

    else 
    cout<<"NO"<<endl;
        
    }
    
}

int main() {
    fast();
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
 
int t;
cin>>t;
while(t--){
    cin>>n;
  solve(n);
}
return 0;

}