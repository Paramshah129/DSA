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
    vector<ll> a(n);
    for (ll i=0;i<n;i++) cin>>a[i];
    
    sort(a.begin(),a.end());
    
    vector<pair<ll,ll>> freq={{a[0],1}};
    for (ll i=1;i<n;i++){
        if (a[i]==a[i-1]) freq.back().second++;
        else freq.push_back({a[i],1});
    }
    
    while(freq.size()>0){
        n=freq.size();
        if (freq[n-1].second%2==0){
            cout<<"YES
";
            return;
        }
        if (n==1){
            cout<<"NO
";
            return;
        }
        if (freq[n-1].first-freq[n-2].first<=k){
            cout<<"YES
";
            return;
        }
        freq.pop_back();
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