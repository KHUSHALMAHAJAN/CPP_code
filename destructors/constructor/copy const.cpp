#include <iostream>
using namespace std;
class number
{
  private:
    int num;
  public:
    number(){
    num = 0;
    cout<<"deflut aegument\n";
    }
    number(int a);
    number(number &cy);
    void disply(void);
};
number :: number(int a)
{
  num = a;
  cout<<"constructors run\n"; 
}
number :: number(number &cy)
{
  num = cy.num;
  cout<<"copy is run\n";
}
void number :: disply(void)
{
  cout<<"A value is "<<num<<endl;
}
int main()
{
  number obj1(54),obj;
  obj1.disply();
  number obj2(obj1);
  obj2.disply();
  return 0;
}
