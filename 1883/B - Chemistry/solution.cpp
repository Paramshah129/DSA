#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    string s;
	    cin>>s;
	    unordered_map<char,int> freq(26);
	    for (int i=0;i<n;i++) freq[s[i]]++;
	    int count=0;
	    for (auto c:freq){
	        if (c.second%2==1) count++;
	    }
	    if (count>k+1) cout<<"No
";
	    else cout<<"Yes
";
	}
return 0;
}