#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
	ll t;
	cin>>t;
	while(t--){
	    ll n;
	    char c;
	    cin>>n;
	    cin>>c;
	    string s;
	    cin>>s;
	    s+=s;
	    n*=2;
 
	    if (c=='g'){
	        cout<<"0
";
	        continue;
	    }
	    
	    ll last=-1,maxi=INT_MIN;
	    for (int i=n-1;i>=0;i--){
	        if (s[i]=='g') last=i;
	        if (s[i]==c){
	            maxi=max(maxi,last-i);
	        }
	    }
	    
	    cout<<maxi<<"
";
	}
}