#include <iostream>
using namespace std;
class temp
{
  private:
    int a;
  public:
    void getnum(int a);
    //this use of return type
    //temp & getnum(int a);
    void putnum(void);
};
void temp :: getnum(int a)
//this use of return type
//temp & temp :: getnum(int a)
{
  //only use of arrow operator (->) 
  this->a = a; 
  //return *this;
}
void temp :: putnum(void)
{
  cout<<"The a value of a is "<<a<<endl;
}
int main()
{
  temp obj;
  //use of return type
  //obj.getnum(7).putnum();
  obj.getnum(7);
  obj.putnum();
  return 0;
}
/* > this is a keyword which is a pointer which point to the object which invokes the member function.
   > A use for keyword a pass variable same name of private ,proteted & public variable name.
   > two type of this.
     1.not a return type.
     2. return type.
   > first type is write a normal way 
   > second type is use refernce write is 
        syntax:-
            class_name & function_name(argument_list)
   > return in such way 
      syntax:-
         return *this;
   > only use of arrow operator (->) 
         */
