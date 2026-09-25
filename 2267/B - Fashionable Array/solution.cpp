#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
#define PB push_back
#define F first
#define S second
 
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
 
#define ALL(x) (x).begin(), (x).end()
#define RALL(x) (x).rbegin(), (x).rend()
 
#define FOR(i,a,b) for(ll i=(a); i<(b); i++)
#define RFOR(i,a,b) for(ll i=(a); i>=(b); i--)
 
#define YES cout<<"Yes
"
#define NO cout<<"No
"
 
#define DEBUG(x) cerr<<#x<<":"<<x<<"
";
 
void solve()
{
    ll n;
    cin>>n;
    vector<ll> a(n);
    for (ll i=0;i<n;i++) cin>>a[i];
    
    vector<ll> freq(101,0);
    for (ll i=0;i<n;i++){
        freq[a[i]]++;
    }
    
    while(true){
        bool flag=false;
        for (ll i=100;i>=1;i--){
            if (freq[i]>0){
                cout<<i<<" ";
                freq[i]--;
                flag=true;
            }
        }
        if (!flag) break;
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