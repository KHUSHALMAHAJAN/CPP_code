#include <iostream>
using namespace std;
template <class data1 = int,class data2 = float,class data3 = char>
class simple
{
  private:
    data1 var1;
    data2 var2;
    data3 var3;
  public:
    simple(data1 var1,data2 var2,data3 var3)
    {
      this->var1 = var1;
      this->var2 = var2;
      this->var3 = var3;
    }
    data1 fundata1()
    {
     cout<<"data 1 function run\n";
     return var1;
    }
    data2 fundata2()
    {
     cout<<"data 2 function run\n";
     return var2;
    }
    data3 fundata3()
    {
     cout<<"data 3 function run\n";
     return var3;
    }
};
int main()
{
  simple <> obj1(2,3.2,'k');
  cout<<obj1.fundata1()<<endl;
  cout<<obj1.fundata2()<<endl;
  cout<<obj1.fundata3()<<endl;
  simple<char,float,int> obj2('l',4.3,6);
  cout<<obj2.fundata1()<<endl;
  cout<<obj2.fundata2()<<endl;
  cout<<obj2.fundata3()<<endl;
  return 0;
}
