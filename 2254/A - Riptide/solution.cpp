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
    ll a,b,c;
    cin>>a>>b>>c;
    
    ll ans=0;
    while(true){
        if (a==b || b==c || a==c) break;
        if (a>b && a>c){
            if (b<c) {a--;b++;}
            else {a--;c++;}
        }
        else if (b>a && b>c){
            if (a<c) {b--;a++;}
            else {b--;c++;}
        }
        else{
            if (a<b) {c--;a++;}
            else {c--;b++;}
        }
        ans++;
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