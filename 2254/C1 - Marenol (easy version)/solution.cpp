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
        cout<<"Yes
";
        return;
    }
    if (n<3){
        cout<<"No
";
        return;
    }
    
    ll a_odd=0,a_even=0,b_odd=0,b_even=0;
    for (ll i=0;i<n;i++){
        if (a[i]=='0'){
            if (i%2==0) a_even++;
            else a_odd++;
        }
        if (b[i]=='0'){
            if (i%2==0) b_even++;
            else b_odd++;
        }
    }
    if (a_odd==b_odd && a_even==b_even) cout<<"Yes
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