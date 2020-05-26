//Beginner Practice Problem
//Lucky Four [LUCKFOUR]

#include <bits/stdc++.h>
using namespace std;

int main()
{
unsigned long long t=0;
cin>>t;

while(t--)
    {
    unsigned long long c=0;
    string n="";
    cin>>n;

    for(unsigned long long i=0;i<n.length();i++)
        {
        if(n[i]=='4') {c++;}
        }
    cout<<c<<"\n";
    }
return 0;
}