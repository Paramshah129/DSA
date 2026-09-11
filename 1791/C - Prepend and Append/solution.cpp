#include <bits/stdc++.h>
using namespace std;
 
int main() {
	long long t;
	cin>>t;
	while(t--){
	    long long n;
	    cin>>n;
	    string s;
	    cin>>s;
	    int i=0,j=n-1;
	    while(i<=j){
	        if ((s[i]=='0' && s[j]=='1') || (s[i]=='1' && s[j]=='0')){
	            i++;
	            j--;
	        }
	        else {
	            break;
	        }
	    }
	    cout<<max(0,j-i+1)<<"
";
	}
return 0;
}