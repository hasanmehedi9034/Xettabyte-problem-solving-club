#include<bits/stdc++.h>

using namespace std;

 int main()
 {
    string s,t;

    while (cin>>s>>t)
    {
        int k=0;

        for (int i=0; i < s.size(); i++)
        {
            for (int j = 0; j < t.size(); j++)
            {
                if(s[i]==t[j])
                {
                    k++;
                    i++;
                }
            }
        }
        if(s.size()==k)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
 }