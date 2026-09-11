#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
	ll t;
	cin>>t;
	while(t--){
	    ll n,k;
	    cin>>n>>k;
	    string s;
	    cin>>s;
	    
	    ll red=0,blue=0;
	    for (ll i=0;i<2*n;i++){
	        if (s[i]=='1'){
	            if (i%2==0) red++;
	            else blue++;
	        }
	    }
	    
	    for (ll i=0;i<2*n;i++){
	        if (s[i]=='1' && s[(i+1)%(2*n)]=='0'){
	            if (i%2==0){
	                red--;
	                blue++;
	            }
	            else{
	                blue--;
	                red++;
	            }
	        }
	    }
	    cout<<blue<<" "<<red<<"
";
	}
}