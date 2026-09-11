#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
	ll t;
	cin>>t;
	while(t--){
	    ll n;
	    cin>>n;
	    ll divide_3=0,divide_2=0;
	    while(n>0 && n%3==0){
	        divide_3++;
	        n/=3;
	    }
	    while(n>0 && n%2==0){
	        divide_2++;
	        n/=2;
	    }
	    if (n>1 || divide_2>divide_3) cout<<"-1
";
	    else cout<<divide_3+(divide_3-divide_2)<<"
";
	}
return 0;
}