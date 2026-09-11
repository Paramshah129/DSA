#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    if (n==2) cout<<"2
";
	    else if (n==3) cout<<"3
";
	    else if (n%2==1) cout<<"1
";
	    else cout<<"0
";
	}
return 0;
}