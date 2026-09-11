#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
	ll t;
	cin>>t;
	while(t--){
	    ll n;
	    cin>>n;
	    
	    ll final_a=1,final_b=n-1;
	    for (ll i=2;i*i<=n;i++){
	        if (n%i==0) {
	            final_a=n/i;
	            final_b=n-final_a;
	            break;
	        }
	    }
	    cout<<final_a<<" "<<final_b<<"
";
	}
}