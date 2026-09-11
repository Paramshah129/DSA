#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
	ll t;
	cin>>t;
	while(t--){
	    ll a,b,c;
	    cin>>a>>b>>c;
	    // b-a=c-b -> 2b=a+c 
	    // a=2b-c,b=(a+c)/2,c=2b-a
	    ll a1=2*b-c;
	    ll b1=(a+c)/2;
	    ll c1=2*b-a;
	    bool flag=false;
	    if (a1/a>0 && a1%a==0) flag=true;
	    if (b1/b>0 && b1%b==0 && (c-a)%2==0) flag=true;
	    if (c1/c>0 && c1%c==0) flag=true;
	    if (flag) cout<<"YES
";
	    else cout<<"NO
";
	}
return 0;
}