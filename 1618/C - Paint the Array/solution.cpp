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
    for(ll i=0;i<n;i++) cin>>a[i];
    
    ll even_gcd=0,odd_gcd=0;
    for (ll i=0;i<n;i++){
        if (i%2==0){
            even_gcd=gcd(even_gcd,a[i]);
        }
        else{
            odd_gcd=gcd(odd_gcd,a[i]);
        }
    }
    
    bool even_gcd_works=true;
    for (ll i=0;i<n;i++){
        if (i%2==1){
            if (a[i]%even_gcd==0){
                even_gcd_works=false;
                break;
            }
        }
    }
    if (even_gcd_works){
        cout<<even_gcd<<"
";
        return;
    }
    
    bool odd_gcd_works=true;
    for (ll i=0;i<n;i++){
        if (i%2==0){
            if (a[i]%odd_gcd==0){
                odd_gcd_works=false;
                break;
            }
        }
    }
    
    if (odd_gcd_works) cout<<odd_gcd<<"
";
    else cout<<"0
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