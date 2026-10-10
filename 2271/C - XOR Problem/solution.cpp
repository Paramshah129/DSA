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
 
int gray(int x) {
    return x ^ (x >> 1);
}
 
void solve()
{
    int n;
    cin >> n;
 
    ll m=1;
    while(m<=n) {
        m*=2;
    }
    cout<<2*m-1<<"
";
    vector<ll> ans(2*m);
    
    for (ll i=1;i<m;i*=2){
        for (ll j=i;j<=2*m-1;j+=2*i){
            ans[j]=i;
        }
    }
    ans[m]=m/2;
    
    for (ll i=1;i<2*m;i++){
        cout<<ans[i]<<" ";
    }
    cout<<"
";
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