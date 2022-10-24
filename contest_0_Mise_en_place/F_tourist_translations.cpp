#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    string m;
    cin>>m;

    string ans;
    for(int i=0; i<t; i++)
    {
        cin>>ans;
        int s = ans.size();
        for(int i=0; i<s; i++)
        {
            if(ans[i]>=97 & ans[i]<=122)
                ans[i]=m[ans[i]-97];

            else if(ans[i]>=65 && ans[i]<91)
                ans[i]=char(m[ans[i]-65]-32);

            else if(ans[i] == '_')
                ans[i]=' ';
        }

        cout<<ans<<endl;
    }
   cout<<endl;
}