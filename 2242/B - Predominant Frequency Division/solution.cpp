#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
	ll t;
	cin>>t;
	while(t--){
	    ll n;
	    cin>>n;
	    vector<ll> a(n);
	    for (ll i=0;i<n;i++) cin>>a[i];
	    
	    vector<ll> pref1(n),pref2(n);
	    for (ll i=0;i<n;i++){
	        ll left,middle;
	        
	        if (a[i]==1) left=1;
	        else left=-1;
	        
	        if (a[i]==3) middle=-1;
	        else middle=1;
	        
	        pref1[i]=left;
	        pref2[i]=middle;
	        
	        if (i>0){
	            pref1[i]+=pref1[i-1];
	            pref2[i]+=pref2[i-1];
	        }
	    }
	    
	    vector<ll> suff1(n);
	    suff1[n-2]=pref2[n-2];
	    
	    for (ll i=n-3;i>=0;i--) suff1[i]=max(suff1[i+1],pref2[i]);
	    
	    bool flag=false;
	    for (ll i=0;i<n-2;i++) {
	        if (pref1[i]>=0 && suff1[i+1]>=pref2[i]){
	            flag=true;
	            break;
	        }          
	    }
	    
	    if (flag) cout<<"YES
";
	    else cout<<"NO
";
	}
return 0;
}