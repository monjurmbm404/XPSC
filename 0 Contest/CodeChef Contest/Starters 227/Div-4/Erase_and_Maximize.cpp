#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n, s;
	    cin >> n >> s;
	    
	    int totalSum_using_5 = n*5;
	    
	    if(totalSum_using_5 >= s)
	        cout << n*6 << endl;
	   else{
	       int first_step_use_6 = s % totalSum_using_5;
	       int first_step_use_5 = n - first_step_use_6;
	       
	       int ans = (first_step_use_6 *5) + (first_step_use_5 * 6);
	       cout << ans << endl;
	   }
	}

}
