#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--){
	    vector<vector<char>> target(10,vector<char>(10));
	    vector<vector<int>> score={
	        {1,1,1,1,1,1,1,1,1,1},
	        {1,2,2,2,2,2,2,2,2,1},
	        {1,2,3,3,3,3,3,3,2,1},
	        {1,2,3,4,4,4,4,3,2,1},
	        {1,2,3,4,5,5,4,3,2,1},
	        {1,2,3,4,5,5,4,3,2,1},
	        {1,2,3,4,4,4,4,3,2,1},
	        {1,2,3,3,3,3,3,3,2,1},
	        {1,2,2,2,2,2,2,2,2,1},
	        {1,1,1,1,1,1,1,1,1,1}
	    };
	    int sum=0;
	    for (int i=0;i<10;i++){
	        for (int j=0;j<10;j++){
	            cin>>target[i][j];
	            if (target[i][j]=='X'){
	                sum+=score[i][j];
	            }
	        }
	    }
	    cout<<sum<<"
";
	}
return 0;
}