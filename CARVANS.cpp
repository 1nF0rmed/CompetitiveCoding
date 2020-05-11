/*
https://www.codechef.com/LRNDSA01/problems/CARVANS
*/
#include <bits/stdc++.h>
using namespace std;

int countTopSpeedCars(vector<int> input, int n) {
    int count = 1;
    int low = input[0];
    for( int i=1;i<n;i++ )
        if(input[i]<=low)
        {
            count++;
            low=input[i];
        }

    return count;
}

int main() {
    int testCases = 0, noCars,tmp;
    cin>>testCases;
    while(testCases--) {
        cin>>noCars;
        vector<int> cars;
        for(int i=0;i<noCars;i++) {
            cin>>tmp;
            cars.push_back(tmp);
        }
        cout << countTopSpeedCars(cars, noCars) << endl;
    }

    return 0;
}