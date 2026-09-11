#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    int i;
	    for (i=n;i>0;i--){
	        if (i%k!=0) break;
	    }
	    if (i==n){
	        cout<<"1
";
	        cout<<n<<"
";
	    }
	    else{
	        cout<<"2
";
	        cout<<i<<" "<<n-i<<"
";
	    }
	}
return 0;
}