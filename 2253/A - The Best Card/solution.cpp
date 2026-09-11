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
 
bool check_prime(ll temp){
    bool flag=true;
    for (ll i=2;i<=sqrt(temp);i++){
        if (temp%i==0){
            flag=false;
            break;
        }
    }
    return flag;
}
 
void solve()
{
    ll n;
    cin>>n;
    
    if (check_prime(n+1)) cout<<"Yes
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