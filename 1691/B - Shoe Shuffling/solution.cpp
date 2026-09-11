#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
	ll t;
	cin>>t;
	while(t--){
	    ll n; 
	    cin>>n;
	    vector<ll> a(n);
	    for (ll i=0;i<n;i++) cin>>a[i];
	    map<ll,ll> freq;
	    for (ll i=0;i<n;i++){
	        freq[a[i]]++;
	    }
	    
	    bool flag=0;
	    for (auto i:freq){
	        if (i.second==1){
	            flag=1;
	            break;
	        }
	    }
	    if (flag){
	        cout<<"-1
";
	        continue;
	    }
	    
	    vector<ll> ans(n);
	    for (ll i=0;i<n;i++) ans[i]=i+1;
	    
	    ll l=0,r=0;
	    while(r<n){
	        if (a[l]==a[r]) r++;
	        else{
	            rotate(ans.begin()+l,ans.begin()+l+1,ans.begin()+r);
	            l=r;
	        }
	    }
	    rotate(ans.begin()+l,ans.begin()+l+1,ans.begin()+r);
	    
	    for (auto i:ans){
	        cout<<i<<" ";
	    }
	    cout<<"
";
	}
return 0;
}