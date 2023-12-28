#include <iostream>
using namespace std;
/*void fun(int a)
{
  cout<<"Call 1st fun Value of a is "<<a<<endl;
}*/
template <class data>
void fun(data a)
{
  cout<<"Call 1st template fun Value of a is "<<a<<endl;
}
void fun(int a)
{
  cout<<"Call 1st fun Value of a is "<<a<<endl;
}

int main()
{
  fun(4);
  fun('k');
  return 0;
}
