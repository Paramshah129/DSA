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
	    
	    ll count=0;
	    for (ll i=0;i<=1;i++){
	        for (ll j=0;j<=1;j++){
	            bool flag=true;
	            for (ll k=0;k<n;k++){
	                ll should_be;
	                if (k%2==1) should_be=((k/2)%2==0)?j:1-j;
	                else should_be=((k/2)%2==0)?i:1-i;
	                
	                if (s[k]!='?' && s[k]-'0'!=should_be){
	                    flag=false;
	                    break;
	                }
	            }
	            if (flag) count++;
	        }
	    }
	    
	    cout<<count<<"
";
	}
}