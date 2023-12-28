#include <iostream>
using namespace std;
class base1
{
  int data1;
  public:
    base1(int i);
    void printdata1(void);
};
base1 :: base1(int i)
{
   data1 = i;
   cout<<"base 1 consturctor run\n";
   printdata1();
}
void base1 :: printdata1(void)
{
   cout<<"your data1 is "<<data1<<endl;
}
class base2
{
  int data2;
  public:
    base2(int i);
    void printdata2(void);
};
base2 :: base2(int i)
{
   data2 = i;
   cout<<"base 2 consturctor run\n";
   printdata2();
}
void base2 :: printdata2(void)
{
   cout<<"your data1 is "<<data2<<endl;
}
class derived : public base1 ,virtual public base2
{
   int derived1,derived2;
   public:
   derived(int a,int b,int c,int d);
   void printderived(void);
};
derived :: derived(int a,int b,int c,int d) : base1(a),base2(b)
{
    derived1 = c;
    derived2 = d;
    cout<<"derived consturctor run\n";
    printderived();
}
void derived :: printderived(void)
{
   cout<<"derived 1 is "<<derived1<<endl;
   cout<<"derived 2 is "<<derived2<<endl;
}
int main()
{
   derived khushal(1,2,3,4);
   return 0;
}
