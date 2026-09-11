#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){// 1 3 4 5 2 
	    int n;
	    cin>>n;
	    vector<int> a(n);
	    for (int i=0;i<n;i++) cin>>a[i];
	    if (a[0]==1) cout<<"yes
";
	    else cout<<"no
";
	}
return 0;
}