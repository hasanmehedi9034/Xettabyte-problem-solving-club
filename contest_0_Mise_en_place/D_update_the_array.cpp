#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,u;
        cin>>n>>u;
        int arry[n];
        for(int i=0; i<n; ++i)
        {
            arry[i]=0;
        }

        int l,r,val;
        for(int i=0; i<u; ++i)
        {
            cin>>l>>r>>val;
            arry[l] += val;
            arry[r+1] -= val;
        }

        for(int i=1; i<n; ++i)
        {
            arry[i]=arry[i]+arry[i-1];
        }


        int pos,value;
        cin>>pos;
        for(int i=0;i<pos;i++)
        {
            cin>>value;
            cout<<arry[value]<<endl;
        }
        
    }
    return 0;
}