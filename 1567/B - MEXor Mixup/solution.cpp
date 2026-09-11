#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
	ll t;
	cin>>t;
	while(t--){
	    ll a,b;
	    cin>>a>>b;
	    
	    ll ans=a;
	    ll XOR;
	    
	    ll check=a-1;
	    if (check%4==0) XOR=check;
	    else if (check%4==1) XOR=1;
	    else if (check%4==2) XOR=check+1;
	    else XOR=0;
	    
	    if (XOR==b) cout<<ans<<"
";
	    else{
	        if ((XOR^b)==a) ans+=2;
	        else ans+=1;
	        cout<<ans<<"
";
	    }
	}
return 0;
}