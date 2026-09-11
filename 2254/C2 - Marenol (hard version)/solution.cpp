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
    string a,b;
    cin>>a>>b;
    
    if (a==b) {
        cout<<"0
";
        return;
    }
    if (n<3){
        cout<<"-1
";
        return;
    }
    
    vector<ll> a_even,a_odd,b_even,b_odd;
    for (ll i=0;i<n;i++){
        if (a[i]=='0'){
            if (i%2==0) a_even.push_back(i);
            else a_odd.push_back(i);
        }
        if (b[i]=='0'){
            if (i%2==0) b_even.push_back(i);
            else b_odd.push_back(i);
        }
    }
    if (a_odd.size()==b_odd.size() && a_even.size()==b_even.size()) {
        ll ans=0;
        for (ll i=0;i<a_even.size();i++){
            ans+=abs(a_even[i]-b_even[i])/2;
        }
        for (ll i=0;i<a_odd.size();i++){
            ans+=abs(a_odd[i]-b_odd[i])/2;
        }
        cout<<ans<<"
";
    }
    else cout<<"-1
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