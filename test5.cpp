#include <iostream>
using namespace std;
class student
{
    string name;
    int mark[5];
    public:
    student()
    {
        string a;
        cout<<"Enter Student name: ";
        cin>>a;
        name=a;
        int b[5];
        cout<<"Enter Marks: ";
        for (int i = 0; i < 5; i++)
        {
            cin>>b[i];
            mark[i]=b[i];
        }
        
    }
    float calculateAverage()
    {
        int sum=0;
        for (int i = 0; i < 5; i++)
        {
            sum+=mark[i];
        }
        float avg=sum/5.0;
        return avg;
    }
    void printResult(float avg)
    {
        cout<<"Average: "<<avg;
    }
    ~student()
    {
        cout<<"Destructor called for "<<name<<endl;
    }
};
int main()
{
    student student1,student2,student3;
    float x=student1.calculateAverage();
    student1.printResult(x);
}