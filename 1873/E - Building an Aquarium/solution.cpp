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
 
bool under(ll mid,ll x,vector<ll>& a){
    ll water=0;
    for (ll i=0;i<a.size();i++){
        if (a[i]<mid) water+=(mid-a[i]);
    }
    return water<=x;
}
 
void solve()
{
    ll n,x;
    cin>>n>>x;
    vector<ll> a(n);
    ll maxi=INT_MIN;
    for (ll i=0;i<n;i++) {
        cin>>a[i];
        maxi=max(maxi,a[i]);
    }
    
    ll low=1,high=maxi+x,ans=-1;
    while(low<=high){
        ll mid=low+(high-low)/2;
        if (under(mid,x,a)){
            ans=mid;
            low=mid+1;
        }
        else high=mid-1;
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