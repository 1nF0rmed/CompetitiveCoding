//Beginner Practice Problem
//Simple Statistics [SIMPSTAT]

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
    long long n=0,k=0;
    double s=0;
    cin>>n>>k;

    vector <long long> v(n);
    for(long long i=0;i<n;i++) {cin>>v[i];}
    sort(v.begin(),v.end());
    for(long long j=k;j<n-k;j++)
        {
        s+=v[j];
        }
    cout<<setprecision(8)<<fixed<<s/(n-2*k)<<"\n";
    }
return 0;
}