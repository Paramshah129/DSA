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
    vector<ll> w(n);
    for (ll i=0;i<n;i++) cin>>w[i];
    
    vector<ll> alice(n);
    vector<ll> bob(n);
    alice[0]=w[0];
    bob[n-1]=w[n-1];
    
    for (ll i=1;i<n;i++){
        alice[i]=alice[i-1]+w[i];
    }
    for (ll i=n-2;i>=0;i--){
        bob[i]=bob[i+1]+w[i];
    }
    sort(ALL(bob));
    
    // for (auto it : alice) cout<<it<<" ";
    // cout<<"
";
    // for (auto it : bob) cout<<it<<" ";
    // cout<<"
";
    
    ll i=0,j=0,ans=0;
    while(i<n && j<n){
        if (alice[i]<bob[j]){
            i++;
        }
        else if (alice[i]>bob[j]){
            j++;
        }
        else{
            if ((i+j+2)<=n) ans=max(ans,i+j+2);
            i++;
            j++;
        }
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
 
/*
9
7 3 20 5 15 1 11 8 10
 
 7 10 30 35 50 51 62 70 80
10 18 29 30 45 50 70 73 80
*/