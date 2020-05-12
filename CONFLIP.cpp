/*
https://www.codechef.com/LRNDSA01/problems/CONFLIP
*/
#include <bits/stdc++.h>
using namespace std;

int countCoins(int i, int n, int q) {
    int res = 0;
    if( n%2==0 )res=n/2;
    else {
        if( i==q ) res=(n-1)/2;
        else res = (n+1)/2;
    }
    
    return res;
}

int main() {
    int testCases=0, i, n, q, g;
    cin>>testCases;
    while(testCases--) {
        cin>>g;
        while(g--) {
            cin>>i;
            cin>>n;
            cin>>q;

            cout << countCoins(i, n, q) << endl;
        }
    }
    return 0;
}