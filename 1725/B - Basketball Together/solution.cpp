#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    ll n,d;
    cin>>n>>d;
    vector<ll> p(n);
    for (ll i=0;i<n;i++) cin>>p[i];
    
    sort(p.begin(),p.end());
    
    ll count=0;
    ll i=-1,j=n-1;
    ll multi=1;
    while(i<j){
        if ((p[j]*multi)<=d && i<j){
            i++;
            multi++;
        }
        else{
            count++;
            j--;
            multi=1;
        }
    }
    cout<<count<<"
";
}