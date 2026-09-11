#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,k,x;
	    cin>>n>>k>>x;
	    if (x!=1){
	        cout<<"Yes
";
	        cout<<n<<"
";
	        for (int i=0;i<n;i++){
	            cout<<"1 ";
	        }
	        cout<<"
";
	    }
	    else{
	        if (k==1) cout<<"No
";
	        else if (k==2){
	            if (n%2==1) cout<<"No
";
	            else{
	                cout<<"Yes
";
	                cout<<n/2<<"
";
	                for (int i=0;i<n/2;i++){
	                    cout<<"2 ";
	                }
	                cout<<"
";
	            }
	        }
	        else if (k>=3){
	            if (n==1) cout<<"No
";
	            else{
	                cout<<"Yes
";
	                int count;
	                if (n%2==0) count=n/2;
	                else count=(n-3)/2;
	                if (n%2==0){
	                    cout<<count<<"
";
	                    for (int i=0;i<count;i++) cout<<"2 ";
	                    cout<<"
";
	                }
	                else{
	                    cout<<count+1<<"
";
	                    cout<<"3 
";
	                    for (int i=0;i<count;i++) cout<<"2 ";
	                    cout<<"
";
	                }
	            }
	        }
	    }
	}
return 0;
}