/*
https://www.codechef.com/LRNDSA01/problems/FLOW007
*/

#include <bits/stdc++.h>
using namespace std;

int reverseNum(int num) {
    int res = 0;
    int sol = 0;
    while(num!=0) {
        res = num%10;
        num /= 10;
        sol = (sol*10)+res;
    }
    return sol;
}

int main() {
    int testCount = 0;
    int tmp =0;
    cin>>testCount;
    while(testCount--) {
        cin>>tmp;
        cout<<reverseNum(tmp)<<endl;
    }
    return 0;
}