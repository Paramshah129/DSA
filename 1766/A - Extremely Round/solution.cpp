#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
bool check(ll x){
    ll count_digits=0;
    ll count_zeroes=0;
    while(x>0){
        if (x%10==0) count_zeroes++;
        count_digits++;
        x/=10;
    }
    return count_zeroes==count_digits-1;
}
 
int main() {
    vector<ll> round_nums;
    for (ll i=0;i<999999;i++){
        if (check(i)==true) round_nums.push_back(i);
    }
	ll t;
	cin>>t;
	while(t--){
	    ll n;
	    cin>>n;
	    ll ans=0;
	    for (int i=0;i<round_nums.size();i++){
	        if (round_nums[i]<=n) ans++;
	        else break;
	    }
	    cout<<ans<<"
";
	}
return 0;
}