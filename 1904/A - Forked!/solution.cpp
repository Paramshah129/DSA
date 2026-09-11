#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
	ll t;
	cin>>t;
	while(t--){
	    ll a,b;
	    cin>>a>>b;
	    ll xk,yk;
	    cin>>xk>>yk;
	    ll xq,yq;
	    cin>>xq>>yq;
	    vector<pair<ll,ll>> moves={
	        {a,b},
	        {a,-b},
	        {-a,b},
	        {-a,-b},
	        {b,a},
	        {b,-a},
	        {-b,a},
	        {-b,-a}
	    };
	    set<pair<ll,ll>> king_targeted,queen_targeted;
	    for (auto[x,y]:moves){
	        king_targeted.insert({xk+x,yk+y});
	        queen_targeted.insert({xq+x,yq+y});
	    }
	    int count=0;
	    for (auto k:king_targeted){
	        if (queen_targeted.count(k)) count++;
	    }
	    cout<<count<<"
";
	}
return 0;
}