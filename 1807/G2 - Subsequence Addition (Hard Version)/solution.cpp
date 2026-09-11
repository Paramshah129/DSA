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
    for (ll i=0;i<n;i++) cin>>a[i];
    
    sort(ALL(a));
    
    if (a[0]!=1){
        cout<<"No
";
        return;
    }
    
    ll sum=a[0];
    bool flag=true;
    for (ll i=1;i<n;i++){
        if (sum<a[i]){
            flag=false;
            break;
        }
        sum+=a[i];
    }
    if (flag) cout<<"Yes
";
    else cout<<"No
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