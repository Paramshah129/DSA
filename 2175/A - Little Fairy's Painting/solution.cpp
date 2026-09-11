#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int> nums(n);
	    for (int i=0;i<n;i++) cin>>nums[i];
	    sort(nums.begin(),nums.end());
	    int distinct=1;
	    for (int i=1;i<n;i++){
	        if (nums[i]!=nums[i-1]) distinct++;
	    }
	    auto ans=upper_bound(nums.begin(),nums.end(),distinct-1);
	    cout<<nums[ans-nums.begin()]<<"
";
	}
return 0;
}