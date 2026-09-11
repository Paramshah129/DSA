#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
	ll t;
	cin>>t;
	while(t--){
	    ll a,b;
	    cin>>a>>b;
	    
	    ll odd_a=a,odd_b=b;
	    while(odd_a%2==0) odd_a/=2;
	    while(odd_b%2==0) odd_b/=2;
	    
	    if (odd_a!=odd_b) cout<<"-1
";
	    else{
	        a/=odd_a;
	        b/=odd_b;
	        a=log2(a);
	        b=log2(b);
	        
	        cout<<ceil(abs(a-b)/3.0)<<"
";
	    }
	}
return 0;
}