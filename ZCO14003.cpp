/*
https://www.codechef.com/LRNDSA01/problems/ZCO14003
*/
#include <bits/stdc++.h>
using namespace std;

long long calculateMax(vector<long long> budgets, int n) {
    long long  max_profit = 0;
    // O(nlog(n))
    sort(budgets.begin(), budgets.end());

    for(int i=0;i<n;i++) {
        max_profit = max(max_profit, budgets[i]*(n-i));
    }

    return max_profit;
}

int main() {
    long long tmp;
    int n;
    cin>>n;

    vector<long long> budgets;

    for(int i=0;i<n;i++) {
        cin>>tmp;
        budgets.push_back(tmp);
    }

    cout << calculateMax(budgets, n) << endl;

    return 0;
}