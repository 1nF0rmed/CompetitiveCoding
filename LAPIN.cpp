/*
https://www.codechef.com/LRNDSA01/problems/LAPIN
*/
#include <bits/stdc++.h>
using namespace std;

string checkCount(string input) {
    int start = 0;
    int n = input.size();
    int mid = (n%2==0)?n/2:(n/2)+1;
    unordered_map<char, int> cmap;

    while(start<(n/2)) {
        cmap[input[start++]]++;
        cmap[input[mid++]]--;
    }

    for( auto i:cmap ) {
        if( i.second>=1 )return "NO";
    }

    return "YES";
}

int main() {
    int testCases;
    cin>>testCases;
    while(testCases--) {
        string input;
        cin>>input;

        cout << checkCount(input) << endl;
    }

    return 0;
}