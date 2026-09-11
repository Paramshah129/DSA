#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
	ll t;
	cin>>t;
	while(t--){
	    ll n;
	    cin>>n;
	    n--;
	    ll msb=log2(n);
	    vector<ll> ans;
	    ll num=pow(2,msb)-1;
	    while(num>=0){
	        ans.push_back(num);
	        num--;
	    }
	    num=pow(2,msb);
	    while(num<=n){
	        ans.push_back(num);
	        num++;
	    }
	    
	    for (auto i:ans){
	        cout<<i<<" ";
	    }
	    cout<<"
";
	}
return 0;
}