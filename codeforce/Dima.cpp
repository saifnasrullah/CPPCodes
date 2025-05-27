#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main()
{
    int n;
    int serejascore=0,demascore=0;
    cin>>n;
    vector<int>card;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        card.push_back(x);
    }
    int l=0,r=n-1;
    for (int i = 0; i < n; i++)
    {
        if(i%2==0)
        {
            //sereja turn//
            int c1=card[l];
            int c2=card[r];
            if(c1>c2)
            {
                serejascore+=c1;
                l++;
            }
            else
            {
                serejascore+=c2;
                r--;
            }
        }
        else
        {
            //dema turn//
            int c1=card[l];
            int c2=card[r];
            if(c1>c2)
            {
                demascore+=c1;
                l++;
            }
            else
            {
                demascore+=c2;
                r--;
            }
        }
    }
    cout<<serejascore<<" "<<demascore<<endl;
}