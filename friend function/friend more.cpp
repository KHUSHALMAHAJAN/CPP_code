#include <iostream>
using namespace std;
class num1
{
  private:
    int number1;
  public:
    int getnum1(void);
    friend void addsub(int number1,int number2);
};
class num2 
{
  private:
    int number2;
  public:
    int getnum2(void);
    friend void addsub(int number1,int number2);
};
int num1 :: getnum1(void)
{
  cout<<"Enter a number 1\t";
  cin>>number1;
  return number1;
}
int num2 :: getnum2(void)
{
  cout<<"Enter a number 2\t";
  cin>>number2;
  return number2;
}
void addsub(int number1,int number2)
{
  cout<<"A add a number is "<<number1+number2<<endl;
  cout<<"A sub a number is "<<number1-number2<<endl;
}
int main()
{
  int n1,n2;
  num1 frist;
  num2 second;
  n1 = frist.getnum1();
  n2 = second.getnum2();
  addsub(n1,n2);
  return 0;
}
