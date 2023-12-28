#include <iostream>
using namespace std;
//forward declaration
class getnum;
class clacute
{
  int add;
  int sub;
  public:
  //int subnum(int ,int ,int);
  int addnum(int ,int );
};
class getnum
{
  int num1;
  int num2;
  public:
  int  getnum1(void);
  int getnum2(void);
  friend class clacute;
  //friend clacute :: int sub(int ,int ,int);
  friend int clacute :: addnum(int ,int );
};
/*class clacute
{
  int add;
  int sub;
  public:
  int sub(int num1,int num2);
  int add(int num1,int num2);
};*/
int getnum :: getnum1(void)
{
  cout<<"Enter a number 1\t";
  cin>>num1;
  return num1;
}
int getnum :: getnum2(void)
{
  cout<<"Enter a number 2\t";
  cin>>num2;
  return num2;
}
int clacute ::addnum(int num1,int num2)
{
  return num1 + num2;
  
  //return add;
}
/*int clacute ::subnum(int num1,int num2,int sub)
{
   sub = num1 - num2;
   return sub;
}*/
int main()
{
  int n1,n2;
  getnum obj1,obj2;
  n1 = obj1.getnum1();
  n2 = obj2.getnum2();
  clacute opr1,opr2;
  int res = opr1.addnum(n1,n2);
  cout<<res<<endl;
  return 0;
}
 
