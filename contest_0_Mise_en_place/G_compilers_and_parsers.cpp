#include <bits/stdc++.h>

using namespace std;

int main()
{

    int t;
    cin >> t;

    for(int i=0; i<t; i++)
    {
        string str;
        cin >> str;
        int  x=0;
        int chk=0;
        int ans=0;
        for (int i = 0; i < str.size(); i++)
        {

            if (str[i] == '<')
                chk++;
            else
            {
                chk--;

                if (chk < 0)
                    break;

                ans++;

                if (chk == 0)
                    x = ans;
            }
        }
        cout << x * 2 << endl;
    }
    cout<<endl;
}