#include <iostream>
using namespace std;
class base
{ 
 public:
   int var_base;
   void putvalue(void);
};
void base :: putvalue(void)
{
  cout<<"In base class value of var_base = "<<var_base<<endl;
}
class derived : public base
{
  public:
    int var_derived;
    void putvalue(void);
};
void derived :: putvalue(void)
{
  cout<<"In base class value of var_base = "<<var_base<<endl;
  cout<<"In derived class value of var_derived = "<<var_derived<<endl;
}
int main()
{
   base * base_pointer;
   base obj_base;
   derived obj_derived;
   base_pointer = &obj_derived;
   base_pointer-> var_base = 23;
   base_pointer-> putvalue();
   //derived * derived_ pointer;
   //derived pointer = & obj_derived;
   obj_derived.var_derived = 345;
   obj_derived.putvalue();
   return 0;
  }
