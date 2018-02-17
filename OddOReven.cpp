#include <iostream>
using namespace std;
class Number1
{
int a;
public:
void get()
{
    cout<<"Input:"<<endl;
cin>>a;
if(a<0)
{
get();
}
if(a>100000)
{
    get();
}
}
void check()
{
    cout<<"Output:"<<endl;
if(a%2==0)
{cout<<"Even";
}
else
{
cout<<"Odd";
}
}
};
int main() {
Number1 n;
n.get();
n.check();
return 0;
}