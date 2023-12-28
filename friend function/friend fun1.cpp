#include <iostream>
using namespace std;
class add
{
  private:
   int num1;
   int num2;
   int ans;
  public:
   void getnum(void);
  friend int addnumber(int num1,int num2,int ans);
};
//int ans;
int sum;
int addnumber(int num1,int num2,int ans)
{
  ans = num1 + num2;
  return ans;
}
void add :: getnum(void)
{
  num1=2;
  num2=3;
  sum = addnumber(2,3,ans);
}
int main()
{
  add num;
  num.getnum();
  cout<<"An Ans is "<<sum<<endl;;
  return 0;
}

