#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
	ll t;
	cin>>t;
	while(t--){
	    ll n;
	    cin>>n;
	    int maxi=0;
	    int count=0;
	    for (int i=1;i<100;i++){
	        if (n%i==0) count++;
	        else{
	            maxi=max(maxi,count);
	            count=0;
	        }
	    }
	    maxi=max(maxi,count);
	    cout<<maxi<<"
";
	}
return 0;
}