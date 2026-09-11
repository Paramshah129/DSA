#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> a(n);
	    for (int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    bool sorted=true;
	    for (int i=1;i<n;i++){
	        if (a[i]<a[i-1]) {
	            sorted=false;
	            break;
	        }
	    }
	    if (sorted==false){
	        cout<<"0
";
	    }
	    else{
	        vector<int> diff;
	        for (int i=1;i<n;i++){
	            diff.push_back(a[i]-a[i-1]);
	        }
	        int min_diff=INT_MAX;
	        for (int i=0;i<diff.size();i++){
	            min_diff=min(min_diff,diff[i]);
	        }
	        if (min_diff==0) cout<<"1
";
	        else cout<<(min_diff/2)+1<<"
";
	        // 8 12 -> 4 steps : 3
	        // 8 11 -> 3 steps : 2
	        // 8 13 -> 5 steps : 3
	        // 8 14 -> 6 steps : 4
	    }
	}
return 0;
}