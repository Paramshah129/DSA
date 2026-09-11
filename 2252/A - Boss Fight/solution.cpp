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
    ll n;
    cin>>n;
    vector<ll> a(n);
    ll sum=0;
    for (ll i=0;i<n;i++) {
        cin>>a[i];
        sum+=a[i];
    }
    
    unordered_map<ll,ll> freq;
    for (ll i=0;i<n;i++){
        freq[a[i]]++;
    }
    
    ll maxi_freq=INT_MIN,maxi_elem=-1;
    for (auto it:freq){
        if (it.second>maxi_freq){
            maxi_elem=it.first;
            maxi_freq=it.second;
        }
    }
    
    ll rem=n-maxi_freq;
    if (maxi_freq<=rem+1){
        cout<<sum<<"
";
    }
    else{
        ll exclude=maxi_freq-rem-2;
        cout<<sum-exclude*maxi_elem<<"
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