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
	    int count=0;
	    int maxi=0;
	    for (int i=0;i<n;i++){
	        if (a[i]==0) count++;
	        else{
	            maxi=max(maxi,count);
	            count=0;
	        }
	    }
	    maxi=max(maxi,count);
	    cout<<maxi<<"
";
	}
return 0;
}