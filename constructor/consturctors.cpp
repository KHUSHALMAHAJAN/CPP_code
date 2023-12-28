#include <iostream>
using namespace std;
class constructors 
{
  private:
    int a;
    int b;
  public:
    constructors(int ,int);//parameterized constructors
    void mul(void);
};
constructors :: constructors(int x,int y)
{
  a = x;
  b = y;
}
void constructors :: mul(void)
{
  cout<<" A multiply is "<<a*b<<endl;
}
int main()
{
//Implicit call
 int num1,num2;
  cin>>num1>>num2;
  constructors  obj1(num1,num2);
//Explicit call
  constructors obj2 = constructors (3,4);
  obj2.mul();
  return 0;
}
  
