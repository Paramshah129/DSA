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
    
    ll odd_ele=0,even_ele=0;
    for (ll i=0;i<n;i++){
        if (a[i]%2==1) odd_ele++;
        else even_ele++;
    }
    
    if (even_ele==0){
        if (odd_ele==3) cout<<"Larpity
";
        else cout<<"Moggity
";
    }
    else{
        if (even_ele==1 && odd_ele==1) cout<<"Larpity
";
        else cout<<"Moggity
";
    }
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