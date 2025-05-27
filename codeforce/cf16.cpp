#include <bits/stdc++.h>
using namespace std;
int main ()
{
    string s;
    cin>>s;
    int cap=0;
    int lowcap=0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i]>='A'&&s[i]<='Z')
        {
            cap++;
        }
        else
        {
            lowcap++;
        }
        
    }
    if (cap>lowcap)
    {
        for (int i = 0; i < s.size(); i++)
        {
            s[i]=toupper(s[i]);
        }
    }
    else
    {
        for (int i = 0; i < s.size(); i++)
        {
            s[i]=tolower(s[i]);
        }
    }
    cout<<s;

}