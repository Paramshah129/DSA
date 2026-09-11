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
    ll n,l,r;
    cin>>n>>l>>r;
    
    vector<ll> ans;    
    
    for (ll i=1;i<=n;i++){
        ll multiple=((l+i-1)/i)*i;
        if (multiple>r){
            cout<<"No
";
            return;
        }
        ans.push_back(multiple);
    }
    cout<<"Yes
";
    for (auto it:ans){
        cout<<it<<" ";
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