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
    ll n,tables,seats;
    cin>>n>>tables>>seats;
    string s;
    cin>>s;
    
    ll ambiverts=0;
    for (ll i=0;i<n;i++){
        if (s[i]=='A') ambiverts++;
    }
    
    ll ans=INT_MIN;
    for (ll i=0;i<=ambiverts;i++){
        ll tables_occupied=0;
        ll a_to_i=0;
        ll maxi=0;
        for (char c:s){
            if (c=='A'){
                a_to_i++;
                if (a_to_i<=i) c='I';
                else c='E';
            }
            if (c=='I'){
                if (tables_occupied<tables){
                    tables_occupied++;
                    maxi++;
                }
            }
            else{
                if (maxi<tables_occupied*seats) maxi++;
            }
        }
        ans=max(maxi,ans);
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