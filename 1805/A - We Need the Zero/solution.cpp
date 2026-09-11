#include <bits/stdc++.h>
using namespace std;
 
int main() {
	long long t;
	cin>>t;
	while(t--){
	    long long n;
	    cin>>n;
	    vector<long long> a(n);
	    for (long long i=0;i<n;i++) cin>>a[i];
	    long long XOR=0;
	    for (long long i=0;i<n;i++) XOR^=a[i];
	    if (n%2==1) cout<<XOR<<"
";
	    else if (n%2==0 && XOR==0) cout<<"0
";
	    else cout<<"-1
";
	}
return 0;
}