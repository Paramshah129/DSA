#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
	ll t;
	cin>>t;
	while(t--){
	    ll n,c;
	    cin>>n>>c;
	    vector<ll> a(n);
	    for (ll i=0;i<n;i++) cin>>a[i];
	    
	    sort(a.begin(),a.end());
	    
	    ll i=0,j=n-1;
	    ll score=0;
	    if (n%2==1){
	        score+=a[n/2]-c;
	    }
	    while(i<j){
	        if (a[i]>=c && a[j]>=c){
	            score+=a[i]+a[j]-c-c;
	            i++;
	            j--;
	        }
	        else{
	            score+=max(a[i],a[j])-c;
                i++;
                j--;
	        }
	    }
	    cout<<score<<"
";
	}
return 0;
}
 
/*
6 6
3 1 4 1 5 9
1 1 3 4 5 9 
 
 
*/