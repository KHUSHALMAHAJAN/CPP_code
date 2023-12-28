#include<iostream>
using namespace std;
template <class num1,class num2>
class sum
{
  private:
    num1 n1;
    num2 n2;
  public:
    sum(num1 n1,num2 n2)
    {
      this->n1 = n1;
      this->n2 = n2;
    }
    num1 addint(void)
    {
      return n1+n2;
    }
    num2 addfloat(void)
    {
      return n1+n2;
    }
};
/*num1 sum :: addint(void)
{
  return n1+n2;
}*/
int main()
{
  sum<int,float>obj1(4,5.2);
  cout<<"addition is int value return  "<<obj1.addint()<<endl;
  //sum<int,float>obj2(4,5.2);
  cout<<"addition is float value return  "<<obj1.addfloat()<<endl;
  return 0;
}
