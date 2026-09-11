#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
	ll t;
	cin>>t;
	while(t--){
	    ll a,b;
	    cin>>a>>b;
	    
	    ll ans=INT_MAX;
	    for (int i=0;i<32;i++){
	        ll op=i;
	        ll new_b=b+i;
	        if (new_b==1) continue;
	        ll copy_a=a;
	        while(copy_a>0){
	            copy_a/=new_b;
	            op++;
	        }
	        ans=min(ans,op);
	    }
	    cout<<ans<<"
";
	}
return 0;
}