#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    ll t;
    cin>>t;
    while(t--){
        ll n,x;
        cin>>n>>x;
        vector<ll> a(n);
        for (ll i=0;i<n;i++) cin>>a[i];
        ll range_mini=a[0]-x;
        ll range_maxi=a[0]+x;
        ll switches=0;
 
        for (ll i=1;i<n;i++){  
            ll new_mini=a[i]-x;
            ll new_maxi=a[i]+x;
            if (new_mini>range_maxi){
                switches++;
                range_mini=new_mini;
                range_maxi=new_maxi;
            }
            else if (new_maxi<range_mini){
                switches++;
                range_mini=new_mini;
                range_maxi=new_maxi;
            }
            else {
                range_mini=max(range_mini,new_mini);
                range_maxi=min(range_maxi,new_maxi);
            }
        }
        cout<<switches<<"
";
    }
}