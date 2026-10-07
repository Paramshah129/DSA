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
    ll n;
    cin>>n;
    string s;
    cin>>s;
    
    vector<ll> st;
    vector<bool> vis(n+1,false);
    for (ll i=1;i<=n;i++){
        if (s[i-1]=='1') st.push_back(i);
        else if (s[i-1]=='2'){
            if (!st.empty()){
                vis[st.back()]=true;
                st.pop_back();
            }
            else vis[i]=true;
        }
        else if (s[i-1]=='3') vis[i]=true;
    }
    ll ans=0;
    for (ll i=1;i<=n;i++){
        if (!vis[i]){
            ans++;
        }
    }
    cout<<ans<<"
";
    for (ll i=1;i<=n;i++){
        if (!vis[i]) cout<<i<<" ";
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