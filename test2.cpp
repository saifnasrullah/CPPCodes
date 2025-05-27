#include <iostream>
using namespace std;
class creectangle
    {
    private:
        int x, y;
    public:
        void set_value()
        {
            x=a;
            y=b;
        };
        int area()
        {

            return (x * y);
        }

    };
    
    void creectangle:: set_value(int a, int b)
    {
        x=a;
        y=b;
    }
int main()
{
    class creectangle reca,reb;
    reca.set_value(4,3);
    reb.set_value(5,8);
    cout<<reb.area()<<" "<<reca.area();
}