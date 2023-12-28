#include <iostream>
using namespace std;
class add
{
  private:
   int num1;
   int num2;
   int ans;
  public:
   void getnum(int a,int b);
  friend int addnumber(int num1,int num2,int ans);
};
//int ans;
int sum;
int addnumber(int num1,int num2,int ans)
{
  ans = num1 + num2;
  return ans;
}
void add :: getnum(int a,int b)
{
  num1=a;
  num2=b;
  sum = addnumber(a,b,ans);
}
int main()
{
  add num;
  num.getnum(2,3);
  cout<<"An Ans is "<<sum<<endl;;
  return 0;
}

