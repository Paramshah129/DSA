#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
ll min_op(string s,string it){
    ll ans=0;
    ll start=it.size()-1;
    for (ll i=s.size()-1;i>=0;i--){
        if (s[i]==it[start]){
            start--;
            if (start<0) break;
        }
        else ans++;
    }
    if (start>=0) ans=INT_MAX;
    return ans;
}
 
int main() {
	ll t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    vector<string> target={"00","25","50","75"};
	    ll ans=LLONG_MAX;
	    for (auto it:target){
	        ans=min(ans,min_op(s,it));
	    }
	    cout<<ans<<"
";
	}
return 0;
}