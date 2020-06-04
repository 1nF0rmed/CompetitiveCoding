//Beginner Practice Problem
//Movie Weekend [MOVIEWKN]

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
    long long n=0,temp=0,x=0;
    cin>>n;
    vector <long long> a(n),b(n);

    for(long long i=0;i<n;i++) {cin>>a[i];}
    for(long long i=0;i<n;i++) {cin>>b[i];}
    temp=a[0]*b[0];
    for(long long i=0;i<n;i++)
        {
        if(a[i]*b[i]>temp)
            {
            temp=a[i]*b[i];
            x=i;
            }
        else if(a[i]*b[i]==temp)
            {
            if(b[i]>b[x]) {x=i;}
            }
        }
    cout<<x+1<<"\n";
    }
return 0;
}