//
// https://www.codechef.com/problems/VCS
//
#include <bits/stdc++.h>
using namespace std;

int main()
{
unsigned long long t=0;
cin>>t;

while(t--)
  {
  unsigned long long n=0,m=0,k=0,trig=0,unun=0,temp=0;
  vector <unsigned long long> a,b;
  cin>>n>>m>>k;

  for(unsigned long long i=0;i<m;i++) {cin>>temp; a.push_back(temp);}
  for(unsigned long long i=0;i<k;i++) {cin>>temp; b.push_back(temp);}

  for(unsigned long long i=1;i<=n||i<=m;i++)
    {
    if(binary_search(a.begin(),a.end(),i))
      {
      for(unsigned long long j=i;j<=i;j++) {if(binary_search(b.begin(),b.end(),i)) {trig++;}}
      }
    }

  for(unsigned long long i=1;i<=n||i<=m;i++)
    {
    if(!binary_search(a.begin(),a.end(),i))
      {
      for(unsigned long long j=i;j<=i;j++) {if(!binary_search(b.begin(),b.end(),i)) {unun++;}}
      }
    }
  cout<<trig<<" "<<unun<<"\n";
  }
return 0;
}