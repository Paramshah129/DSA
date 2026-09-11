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
	    for (long long i=0;i<n;i++) cin>>a[i];  
	    bool flag=false;
	    for (int i=0;i<n;i++){
	        for (int j=i+1;j<n;j++){
	            if (gcd(a[i],a[j])<=2) flag=true;
	        }
	    }
	    if (flag) cout<<"YES
";
	    else cout<<"NO
";
	}
return 0;
}