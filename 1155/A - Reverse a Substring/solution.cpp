#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
	ll n;
	cin>>n;
	string s;
	cin>>s;
	
	ll check=0,first=-1,second=-1;
	for (ll i=1;i<n;i++){
	    if (s[i]<s[i-1]){
	        swap(s[i],s[i-1]);
	        first=i;
	        second=i+1;
	        check=1;
	        break;
	    }
	}
	
	if (check){
	    cout<<"YES
";
	    cout<<first<<" "<<second<<"
";
	}
	else cout<<"NO
";
	return 0;
}