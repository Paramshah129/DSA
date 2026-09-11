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
    vector<ll> a(n),b(n);
    for (ll i=0;i<n;i++) cin>>a[i];
    for (ll i=0;i<n;i++) cin>>b[i];
    
    ll one=-1,two=-1;
    for (ll i=0;i<n;i++){
        if (a[i]!=b[i]){
            if (one==-1){
                one=i;
            }
            else{
                two=i;
                break;
            }
        }
    }
    
    if (two==-1) two=n-1;
    ll i=one-1;
    while(i>=0){
        if (b[i]<=b[i+1]) i--;
        else break;
    }
    one=i+1;
    ll j=two+1;
    while(j<n){
        if (b[j]>=b[j-1]) j++;
        else break;
    }
    two=j-1;
    
    cout<<one+1<<" "<<two+1<<"
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