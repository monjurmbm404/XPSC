#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n , k;
	    cin >> n >> k;
	    vector<int> v1(n);
	    vector<int> prices;
	    for(int i = 0; i<n; i++){
	        cin >> v1[i];
	    }
	    string s;
	    cin >> s;
	   // cout << s[0] << endl;
	    int cost = 0;
	    for(int i=0; i<n; i++){
	        if(s[i] == '0'){
	            prices.push_back(v1[i]);
	        }
	    }
	    sort(prices.begin(), prices.end());
	    if(prices.size() < k){
	        cout << -1 << endl;
	    }
	    else{
	        for(int i = 0; i<k ; i++){
	            cost += prices[i];
	        }
	        cout << cost << endl;
	    }
	}
}
