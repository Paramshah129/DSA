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
    string s;
    cin>>s;
    
    ll count=1;
    for (ll i=1;i<n;i++){
        if (s[i]!=s[i-1]) count++;
    }
    
    ll ans=count;
    for (ll i=1;i<n-1;i++){
        ll temp=count;
        if (s[i]!=s[i-1]){
            temp--;
        }
        if (s[i]!=s[i+1]){
            temp--;
        }
        if (s[i-1]!=s[i+1]){
            temp++;
        }
        ans=min(ans,temp);
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