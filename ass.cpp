#include <iostream>
using namespace std;
class digit_count 
{
float digit;
public:
    digit_count(float d) 
    {
        digit=d;
    }
    void digit_countv2() 
    {
        int init=(int)digit;
        float deci=digit-init;
        int intcount=0;
        while(init!=0) 
        {
            init=init/10;
            intcount++;
        }
        int decicount = 0;
        while(deci>0) 
        {
            deci=deci*10;
            int deciint=(int)deci;
            deci=deci-deciint;
            decicount++;
        }
        cout<<intcount<<" digit before decimal & "<<decicount<<" digit after decimal.";
    }
    ~digit_count() 
    {
        digit=0;
    }
};
int main() 
{
    float stupid;
    cout<<"Enter number: ";
    cin>> stupid;
    digit_count opp(stupid);
    opp.digit_countv2();
    return 0;
}
