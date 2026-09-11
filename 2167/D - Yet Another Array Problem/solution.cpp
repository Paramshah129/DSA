#include <bits/stdc++.h>
using namespace std;
 
int main() {
	long long t;
	cin>>t;
	while(t--){
	    long long n;
	    cin>>n;
	    vector<long long> a(n);
	    for (long long i=0;i<n;i++) cin>>a[i];
	    long long j=2;
	    bool flag1=false;
	    while(j<LLONG_MAX){
	        bool flag2=false;
	        for (long long i=0;i<n;i++){
	            if (__gcd((long long)j,(long long)a[i])==1){
	                cout<<j<<"
";
	                flag1=true;
	                flag2=true;
	                break;
	            }     
	        }
	        if (flag2==true) break;
	        j++;
	    }
	    if (flag1==false) cout<<"-1
";
	}
}