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
 
bool check_pali(vector<ll>& a,ll exclude){
    vector<ll> b;
    for (ll i=0;i<a.size();i++){
        if (a[i]!=exclude) b.push_back(a[i]);
    }
    ll m=b.size();
    for (ll i=0;i<m;i++){
        if (b[i]!=b[m-i-1]){
            return false;
        }
    }
    return true;
}
 
void solve()
{
    ll n;
    cin>>n;
    vector<ll> a(n);
    for (ll i=0;i<n;i++) cin>>a[i];
    
    for (ll i=0;i<n;i++){
        if (a[i]!=a[n-i-1]){
            if (check_pali(a,a[i]) || check_pali(a,a[n-i-1])) cout<<"Yes
";
            else cout<<"No
";
            return;
        }
    }
    cout<<"Yes
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