//Beginner Practice Problem
//Drumpf for President! [STUDVOTE]

#include <bits/stdc++.h>
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

long long t=0;
cin>>t;
while(t--)
    {
    long long n=0,k=0,ans=0;
    cin>>n>>k;
    vector <long long> v(n);
    vector <long long> x(n);
    for(long long i=0;i<n;i++)
        {
        cin>>v[i];
        if(v[i]==i+1) {x[i]=-4444;}
        else {x[i]=0;}
        }
    for(long long i=0;i<n;i++)
        {
        x[v[i]-1]++;
        }
    for(long long i=0;i<n;i++)
        {
        if(x[i]>=k) {ans++;}
        }
    cout<<ans<<"\n";
    }
return 0;
}