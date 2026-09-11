#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main() {
	ll t;
	cin>>t;
	while(t--){
	    ll n;
	    cin>>n;
	    vector<ll> a(n);
	    for (ll i=0;i<n;i++) cin>>a[i];  
	    ll two=0;
	    for (ll i=0;i<n;i++){
	        if (a[i]==2) two++;
	    }
	    if (two%2==1) cout<<"-1
";
	    else{
	        ll last=two/2;
	        ll count=0;
	        ll ans=0;
	        for (ll i=0;i<n;i++){
	            if (a[i]==2) count++;
	            if (count==last){
	                ans=i+1;
	                break;
	            }
	        }
	        cout<<ans<<"
";
	    }
	}
return 0;
}