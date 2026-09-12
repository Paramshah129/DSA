#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
#define PB push_back
#define F first
#define S second
 
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
 
#define ALL(x) (x).begin(), (x).end()
#define RALL(x) (x).rbegin(), (x).rend()
 
#define FOR(i,a,b) for(ll i=(a); i<(b); i++)
#define RFOR(i,a,b) for(ll i=(a); i>=(b); i--)
 
#define YES cout<<"Yes
"
#define NO cout<<"No
"
 
#define DEBUG(x) cerr<<#x<<":"<<x<<"
";
 
void solve()
{
    ll n,k;
    cin>>n>>k;
    if (k<n || k>2*n-1){
        cout<<"-1
";
        return;
    }
    
    vector<vector<ll>> mat(n,vector<ll> (n,0));
    
    ll mod_cols=2*n-k;
    for (ll i=0;i<n;i++){
        mat[i][i%mod_cols]=i+1;
    }
    
    for (ll i=0;i<(k-n);i++){
        mat[0][mod_cols+i]=n+i+1;
    }
    
    ll temp=k+1;
    for (ll i=0;i<n;i++){
        for (ll j=0;j<n;j++){
            if (mat[i][j]==0){
                mat[i][j]=temp++;
            }
        }
    }
    
    for (ll i=0;i<n;i++){
        for (ll j=0;j<n;j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<"
";
    }
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin>>t;
    while(t--)
    {
	    solve();
    }
}