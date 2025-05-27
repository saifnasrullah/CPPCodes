#include <iostream>
using namespace std;
class cat
{
    string name;
    string color;
    public:
    cat()
    {
        name="stupid nigger";
        color="black";
    }
    cat(string cname,string ccolor)
    {
        name=cname;
        color=ccolor;
    }
    void print_cat()
    {
        cout<<"Cat:"<<endl;
        cout<<name<<endl;
        cout<<color<<endl<<endl;
    }
};
int main()
{
    cat cat1;
    cout<<"Cat 1: "<<endl;
    cat1.print_cat();
    cat cat2("white boy","white");
    cout<<"cat2:"<<endl;
    cat2.print_cat();
}