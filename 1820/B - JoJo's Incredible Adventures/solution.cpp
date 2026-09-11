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
    string s;
    cin>>s;
    ll n=s.size();
    ll maxi=0,i=0;
    while(i<n){
        if (s[i]=='0'){
            i++;
            continue;
        }
        ll j=i+1;
        while(j<n && s[j]=='1'){
            j++;
        }
        maxi=max(maxi,j-i);
        i=j;
    }
    if (maxi==n){
        cout<<n*n<<"
";
        return;
    }
    if (s[0]=='1' && s[n-1]=='1'){
        ll i=0;
        ll count=0;
        while(i<n && s[i]=='1'){
            i++;
            count++;
        }
        ll j=n-1;
        while(j>i && s[j]=='1'){
            j--;
            count++;
        }
        maxi=max(maxi,count);
    }
    maxi++;
    ll temp=(maxi+1)/2;
    cout<<(temp)*(maxi/2)<<"
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