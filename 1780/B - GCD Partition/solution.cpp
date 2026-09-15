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
	vector<ll> a(n); 
	for (ll i=0;i<n;i++) cin>>a[i];
 
	ll ans=0; 
	ll tot_sum=accumulate(a.begin(),a.end(),0LL); 
	ll sum=0;
	for (ll i=0;i<n-1;i++){
		sum+=a[i]; 
		ans=max(ans,gcd(tot_sum-sum,sum));
	}
	cout<<ans<<"
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