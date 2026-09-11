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
    vector<vector<ll>> input(n,vector<ll>(n));
    for (ll i=0;i<n;i++){
        for (ll j=0;j<n;j++){
            cin>>input[i][j];
        }
    }
    
    if (n==1){
        cout<<"Yes
";
        return;
    }
    
    ll count=0;
    for (ll i=0;i<n;i++){
        for (ll j=0;j<n;j++){
            if (input[i][j]!=input[(n-1)-i][(n-1)-j]){
                count++;
            }
        }
    }
    count/=2;
    
    if (count>k) cout<<"No
";
    else if (n%2==1) cout<<"Yes
";
    else if (((k-count)%2)==0) cout<<"Yes
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