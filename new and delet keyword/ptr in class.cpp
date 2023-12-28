#include <iostream>
using namespace std;
class simple 
{
 int mem1,mem2;
 public:
  void getvalue(int a,int b);
  void putvalue(void);
};
void simple :: getvalue(int a,int b)
{
  mem1 = a;
  mem2 = b;
}
void simple :: putvalue(void)
{
  cout<<"value of Member 1 is "<<mem1<<endl;
  cout<<"value of Member 2 is "<<mem2<<endl;
}
int main()
{
  simple obj;
  simple *ptr = &obj;
  (*ptr).getvalue(5,9);
  (*ptr).putvalue();
  obj.getvalue(3,6);
  obj.putvalue();
  simple *ptr2 = new simple[5];
  ptr2->getvalue(8,0);
  ptr2->putvalue();
    //delete keyword not use
  delete ptr2;
   ptr2->getvalue(9,9);
  ptr2->putvalue();
  return 0;
}
