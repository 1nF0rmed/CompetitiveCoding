//Beginner Practice Problem
//Total Expenses [FLOW009]

#include <bits/stdc++.h>
using namespace std;

int main()
{
unsigned long long t=0;
cin>>t;

while(t--)
    {
    double q=0,p=0,c=0;
    cin>>q>>p;
    if(q>1000) {p=0.9*p;}
    cout<<fixed<<setprecision(6)<<p*q<<"\n";
    }
return 0;
}