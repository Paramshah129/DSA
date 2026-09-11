#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    vector<ll> primes;
    for (ll i=2;i<=1e5;i++){
        bool flag=true;
        for (ll j=2;j*j<=i;j++){
            if (i%j==0){
                flag=false;
                break;
            }
        }
        if(flag) primes.push_back(i);
    }
    
	ll t;
	cin>>t;
	while(t--){
	    ll d;
	    cin>>d;
	    
	    ll p=-1;
	    for (ll i=0;i<primes.size();i++){
	        if (primes[i]>= (d+1)){
	            p=primes[i];
	            break;
	        }
	    }
	    
	    ll q=-1;
	    for (ll i=0;i<primes.size();i++){
	        if (primes[i]>= (d+p)){
	            q=primes[i];
	            break;
	        }
	    }
	    
	    cout<<min(1LL*p*p*p,1LL*p*q)<<"
";
	}
return 0;
}