#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
	ll t;
	cin>>t;
	while(t--){
	    ll n,m;
	    cin>>n>>m;
	    
	    vector<vector<ll>> matrix(n,vector<ll>(m));
	    
	    for (ll i=0;i<n;i++){
	        for (ll j=0;j<m;j++){
	            cin>>matrix[i][j];
	        }
	    }
	    
	    ll sum=0,count_neg=0,mini=INT_MAX;
	    for (ll i=0;i<n;i++){
	        for (ll j=0;j<m;j++){
	            sum+=abs(matrix[i][j]);
	            if (matrix[i][j]<0) count_neg++;
	            mini=min(mini,abs(matrix[i][j]));
	        }
	    }
	    
	    if (count_neg%2==0) cout<<sum<<"
";
	    else cout<<sum-(2*mini)<<"
";
	}
return 0;
}
 
//935 for 3rd