#include <iostream>
using namespace std;
int num=0;
class destructors
{ 
  private:
    //int num;
  public:
    destructors(void);
    ~destructors(void);
};
destructors :: destructors(void)
{
  num++;
  cout<<num<<endl;
  cout<<"In constructor"<<endl;
}
destructors :: ~destructors(void)
{
  num--;
  cout<<num<<endl;
  cout<<"In destructor"<<endl;
}
int main()
{
  destructors obj1;
  cout<<"In main in command\n";
  {
     destructors obj2,obj3;
     cout<<"In a block\n";
  }
  cout<<"outer a block\n";
  return 0;
}
