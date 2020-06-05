//Beginner Practice Problem
//Laddu [LADDU]

#include <bits/stdc++.h>
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);

int t=0;
cin>>t;

while(t--)
    {
    int activities=0,x=0,laddus=0;
    string origin="";

    cin>>activities>>origin;
    while(activities--)
        {
        string s="";
        cin>>s;

        if(s=="CONTEST_WON")
            {
            int rank=0;
            cin>>rank;
            int bonus=max(0,20-rank);
            laddus+=300+bonus;
            }
        else if(s=="TOP_CONTRIBUTOR")
            {
            laddus+=300;
            }
        else if(s=="BUG_FOUND")
            {
            int severity=0;
            cin>>severity;
            laddus+=severity;
            }
        else if(s=="CONTEST_HOSTED")
            {
            laddus+=50;
            }
        if(origin=="INDIAN") {x=laddus/200;}
        else {x=laddus/400;}
        }
    cout<<x<<"\n";
    }
return 0;
}