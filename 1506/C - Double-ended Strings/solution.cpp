#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
	ll t;
	cin>>t;
	while(t--){
	    string a,b;
	    cin>>a>>b;
	    ll n=a.size(),m=b.size();
	    
	    ll lcs=0;
	    
	    for (ll len=1;len<=min(n,m);len++){
	        for (ll i=0;i+len<=n;i++){
	            for (ll j=0;j+len<=m;j++){
	                string ext_A=a.substr(i,len);
	                string ext_B=b.substr(j,len);
	                if (ext_A==ext_B){
	                    lcs=max(lcs,len);
	                }
	            }
	        }
	    }
	    
	    cout<<n+m-2*lcs<<"
";
	}
return 0;
}