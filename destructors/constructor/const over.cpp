#include <iostream>
using namespace std;
class over
{
   private:
     int var1,var2;
    public:
      over(int a,int b);
      over(int a);
      void add(void);
};
over :: over(int a,int b)
{
    var1 = a;
    var2 = b;
}
over :: over(int a)
{
    var1 = a;
    var2 = 0;
}
void over :: add(void)
{
   cout<<"Ans is "<<var1+var2<<endl;
}
int main()
{
   over obj1(4,6);
   obj1.add();
   over obj2(2);
   obj2.add();
   return 0;
}
