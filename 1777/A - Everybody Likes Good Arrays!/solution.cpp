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
	    int ans=0;
	    for (int i=1;i<n;i++){
	        if (a[i]%2!=a[i-1]%2) continue;
	        else{
	            int count=0;
	            while(a[i]%2==a[i-1]%2 && i<n){
	                count++;
	                i++;
	            }
	            ans+=count;
	        }
	    }
	    cout<<ans<<"
";
	}
return 0;
}