#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    int flag=false;
	    for (int i=1;i<n-1;i++){
	        if (s[i]=='.' && s[i-1]=='.' && s[i+1]=='.'){
	            flag=true;
	            break;
	        }
	    }
	    if (flag) cout<<"2
";
	    else{
	        int count=0;
	        for (int i=0;i<n;i++){
	            if (s[i]=='.') count++;
	        }
	        cout<<count<<"
";
	    }
	}
return 0;
}