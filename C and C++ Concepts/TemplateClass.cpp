#include <iostream>
using namespace std;

template <class t>
class Arithmetic
{
    private:
     t a, t b;
    public:   
     Arithmetic(t a ,t  b)
     {
      this->a=a;
      this->b=b;
     }
     t add();
     t sub();
};
template <class t>
t Arithmetic <t> ::add()
{
    t c;
    c=a+b;
    return c;
}
template <class t>
t Arithmetic <t> ::sub()
{
    t c;
    c=a-b;
    return c;
}

int main()
{
Arithmetic <int> ar(10,4);
cout<<ar.add();
cout<<ar.sub();

return 0;
}