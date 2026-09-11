#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
#define PB push_back
#define F first
#define S second
 
#define ALL(x) (x).begin(), (x).end()
#define RALL(x) (x).rbegin(), (x).rend()
 
#define DEBUG(x) cerr<<#x<<":"<<x<<"
";
 
void solve()
{
    ll n,k;
    cin>>n>>k;
    vector<ll> a(n);
    for (ll i=0;i<n;i++) cin>>a[i];
    
    map<ll,bool> mpp;
    for (auto it:a) mpp[it]=true;
    
    for (ll i=0;i<n;i++){
        if (mpp.find(a[i]-k)!=mpp.end()){
            cout<<"Yes
";
            return;
        }
    }
    cout<<"No
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