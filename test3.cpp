#include <iostream>
using namespace std;
float dig_separate(float digi)
{
    int dec;
    for (int i = 0; i < digi;i++)
    {
        dec=i;
    }
    float adec= digi - dec;
    return dec,adec;
}
class digit_count
    {
    float digit;
    public:
        digit_count(int digit)
        {
            int count=0;
            while(digit>1)
            {
                digit=digit/10;
                count++;
            }
            cout<<count;
        }
        digit_count(float digit)
        {
            
        }
        ~digit_count();
    };
int main()
{
    float dig;
    cin>>dig;
    int decici=dig_separate(dig);
    float depici=dig_separate(dig);
    digit_count digi(decici);
}