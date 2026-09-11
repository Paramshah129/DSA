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
    ll n,x;
    cin>>n>>x;
 
    vector<ll> prefix[3];
    for (ll i=0;i<3;i++){
        ll s=0;
        prefix[i].push_back(s);
        for (ll j=0;j<n;j++){
            ll input;
            cin>>input;
            if ((s|input)!=s){
                s|=input;
                prefix[i].push_back(s);
            }
        }
    }
    
    bool flag=false;
    for (auto it1:prefix[0]){
        for (auto it2:prefix[1]){
            for (auto it3:prefix[2]){
                if ((it1|it2|it3)==x){
                    flag=true;
                    break;
                }
            }
        }
    }
    
    if (flag) cout<<"Yes
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