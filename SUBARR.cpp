#include <bits/stdc++.h>
using namespace std;

void subarraySum(vector<int> input, int total) {
    int start = 0, end = 0;
    int sum = input[end];
    int n = input.size();
    while( start<n&&end<n ) {
        if( sum==total ){
            cout << start+1 << " " << end+1 << endl;
            return;
        }
        if( sum<total ){end++;sum+=input[end];}
        else if( sum>total ){
            sum-=input[start];start++;
        }
    }
    
    cout << "-1" << endl;
}

int main() {
	int testCases = 0, n, total, tmp;
	cin>>testCases;
	while( testCases-- ) {
	    cin>>n;
	    cin>>total;
	    vector<int> input;
	    for(int i=0;i<n;i++) {
	        cin>>tmp;
	        input.push_back(tmp);
	    }
	    
	    subarraySum(input, total);
	}
	return 0;
}