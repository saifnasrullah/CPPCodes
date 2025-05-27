#include <iostream>
using namespace std;
class Dec2Oct
{
    private:
    float dec;
    string value;
    public:
    Dec2Oct(float a)
    {
        dec=a;
    }
    float conv()
    {
        int intpart=int(dec);
        float decpart=dec-intpart;
        int i=0;
        while(intpart>0)
        {
            value[i]=intpart%8;
            intpart=intpart/8;
            i++;
        }
        value[i]='.';
        while(decpart!=0)
        {
            value[i]=decpart*8;
            i++;
        }
        
    }
    ~Dec2Oct()
    {
        dec=0;
    }
};
int main()
{
    int x;
    cin>>x;
    Dec2Oct obj(x);
    obj.conv();

}