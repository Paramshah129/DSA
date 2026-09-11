#include <bits/stdc++.h>
using namespace std;
 
int main() {
	long long t;
	cin>>t;
	while(t--){
	    long long a,b,c,d;
	    cin>>a>>b>>c>>d;
	    if (a+(d-b)<c || d<b) cout<<"-1
";
	    else{
	        int count=0;
	        count+=(d-b);
	        a+=(d-b);
	        count+=a-c;
	        cout<<count<<"
";
	    }
	}
return 0;
}