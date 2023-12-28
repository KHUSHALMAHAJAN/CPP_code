#include <iostream>
using namespace std;
template <class data1>
class simple
{
  data1 var1;
  public:
    simple(data1 var1)
    {
      this->var1 = var1;
    }
    void display(void);
};
template <class data1>
void simple<data1> :: display(void)
{
  cout<<"value of data 1 is "<<var1<<endl;
}
int main()
{
  simple<char> obj1('k');
  obj1.display();
  return 0;
}
