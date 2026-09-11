#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){//  
	    int n;
	    cin>>n;
	    vector<int> a(n);
	    for (int i=0;i<n;i++) cin>>a[i];
	    map<int,int> freq;
	    for (int i=0;i<n;i++) freq[a[i]]++;
	    if (freq.size()>2) cout<<"No
";
	    else{
	        int f1=freq.begin()->second;
	        int f2=freq.rbegin()->second;
	        if (f1==f2) cout<<"Yes
";
	        else if (n%2==1 && abs(f1-f2)==1) cout<<"Yes
";
	        else cout<<"No
";
	    }
	}
return 0;
}