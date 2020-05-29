//Beginner Practice Problem
//Chef and Two Strings [CHEFSTLT]

#include <bits/stdc++.h>
using namespace std;

int main()
{
unsigned long long t=0;
cin>>t;

while(t--)
  {
  string s1="",s2="";
  cin>>s1>>s2;

  unsigned long long minimum=0,maximum=0;
  for(unsigned long long i=0;i<s1.length();i++)
    {
    if(s1[i]=='?'||s2[i]=='?') {maximum++;}
    else if(s1[i]!=s2[i]) {maximum++; minimum++;}
    }
  cout<<minimum<<" "<<maximum<<"\n";
  }
return 0;
}
