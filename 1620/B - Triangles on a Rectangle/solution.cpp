#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
	ll t;
	cin>>t;
	while(t--){
	    ll w,h;
	    cin>>w>>h;
	    
	    ll area=INT_MIN;
	    for (int i=0;i<4;i++){
	        ll k;
	        cin>>k;
	        
	        ll first,last;
	        for (ll w=0;w<k;w++){
	            ll input;
	            cin>>input;
	            if (w==0) first=input;
	            if (w==k-1) last=input;
	        }
	        
	        ll base=last-first;
            ll height;
            if (i<=1) height=h;
            else height=w;
            
            area=max(area,base*height);
	    }
	    cout<<area<<"
";
	}
return 0;
}