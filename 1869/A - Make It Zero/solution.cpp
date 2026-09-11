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
	    if (n%2==0){
	        cout<<"2
";
	        cout<<"1 "<<n<<"
";
	        cout<<"1 "<<n<<"
";
	    }
	    else{
	        cout<<"4
";
	        cout<<"1 "<<n-1<<"
";
	        cout<<"1 "<<n-1<<"
";
	        cout<<n-1<<" "<<n<<"
";
	        cout<<n-1<<" "<<n<<"
";
	    }
	}
return 0;
}