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
	    vector<int> b;
	    vector<int> c;
	    sort(a.begin(),a.end());
	    if (a[0]==a[n-1]) cout<<-1<<"
";
	    else{
	        int maxi=INT_MIN;
	        for (int i=0;i<n;i++){
	            maxi=max(maxi,a[i]);
	        }
	        for (int i=0;i<n;i++){
	            if (a[i]==maxi) c.push_back(a[i]);
	            else b.push_back(a[i]);
	        }
	        cout<<b.size()<<" "<<c.size()<<"
";
	        for (int i=0;i<b.size();i++){
	            cout<<b[i]<<" ";
	        }
	        cout<<"
";
	        for (int i=0;i<c.size();i++){
	            cout<<c[i]<<" ";
	        }
	        cout<<"
";
	    }
	}
return 0;
}