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
 
bool check(ll mid,ll n){
    ll max_oranges=0;
    for (ll i=1;i<=mid;i++){
        max_oranges+=(i*(mid/i));
    }
    if (max_oranges>=n) return true;
    else return false;
} 
 
void solve()
{
    ll n;
    cin>>n;
    
    ll low=1,high=n,ans=n;
    while(low<=high){
        ll mid=(low+high)/2;
        if (check(mid,n)){
            ans=mid;
            high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    cout<<ans<<"
";
    
    vector<ll> a;
    ll remaining=n;
    ll bag=1;
    
    for (ll i=ans;i>=1;i--){
        ll count=min(ans/i,remaining/i);
        for (ll j=0;j<count;j++){
            for (ll k=0;k<i;k++){
                a.push_back(bag);
            }
            bag++;
        }
        remaining-=(count*i);
    }
    
    for (auto it:a){
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