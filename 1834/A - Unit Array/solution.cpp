#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> a(n);
	    for (int i=0;i<n;i++) cin>>a[i];
	    int one=0;
	    int minus_one=0;
	    for (int i=0;i<n;i++){
	        if (a[i]==1) one++;
	        else minus_one++;
	    }
	    int ans=0;
	    while(one<minus_one || minus_one%2==1){
	        ans++;
	        one++;
	        minus_one--;
	    }
	    cout<<ans<<"
";
	}
return 0;
}