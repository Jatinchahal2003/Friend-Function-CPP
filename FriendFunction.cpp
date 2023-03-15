#include<iostream>
using namespace std;

class friendly{
    int x;
    public:
    void setvalue(int a)
    {
        x =  a;
    }
    friend void sum(friendly x, friendly y);
};

void sum(friendly x,friendly y)
{
    int sum = x.x +y.x;
    cout<<"Sum is "<<sum;
}
int main()
{
    friendly obj1,obj2;
    obj1.setvalue(15);
    obj2.setvalue(20);

    sum(obj1,obj2);

    return 0;
}