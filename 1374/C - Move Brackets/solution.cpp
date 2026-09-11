#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
	ll t;
	cin>>t;
	while(t--){
	    ll n;
	    cin>>n;
	    string s;
	    cin>>s;
	    
	    ll ans=0,count=0;
	    for (ll i=0;i<n;i++){
	        if (s[i]=='(') count++;
	        else count--;
	       
	        if (count<0){
	            ans++;
	            count=0;
	        }
	    }
	    cout<<ans<<"
";
	}
return 0;
}