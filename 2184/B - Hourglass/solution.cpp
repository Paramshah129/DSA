#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
	    int s,k,m;
	    cin>>s>>k>>m;
	    if (k>m) cout<<max(0,s-m)<<"
";
	    else if (k==m) cout<<min(s,k)<<"
";
	    else{
	        int flips_performed=m/k;
	        if (flips_performed%2==0) cout<<max(0,s-(m%k))<<"
";
	        else cout<<max(0,min(s,k)-(m%k))<<"
";
	    }
	}
return 0;
}