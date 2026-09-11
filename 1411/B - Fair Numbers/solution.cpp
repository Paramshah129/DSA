#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
bool fair_checker(ll n){
    ll original_n=n;
    bool f=true;
    while(n>0){
        ll rem=n%10;
        if (rem==0){
            n/=10;
            continue;
        }
        if (original_n%rem!=0) {
            f=false;
            break;
        }
        n/=10;
    }
    return f;
}
 
int main() {
	ll t;
	cin>>t;
	while(t--){
	    ll n;
	    cin>>n;
        
	    while(true){
	        bool check=fair_checker(n);
	        if (check){
	            cout<<n<<"
";
	            break;
	        }
	        else n++;
	    }
	}
return 0;
}