#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int x;
    int wadud=0;
    int  durjoy=0;
    vector<int>a;
    cin>>x;
    for (int i = 0; i < x; i++)
    {
        int c;
        cin>>c;
        a.push_back(c);
    }
    for (int i = 0,j=1; i < x,j<x; i++)
    {
        if (i%2==1)
        {
            wadud=wadud+*(a.end()-j);
        }
        else
        {
            durjoy=durjoy+*(a.begin()+i);
        }
    }
    if (wadud>durjoy)
    {
        cout<<"Wadud :"<<wadud<<endl;
    }
    else{
        cout<<"Durjoy"<<durjoy<<endl;
    }
    
    
}