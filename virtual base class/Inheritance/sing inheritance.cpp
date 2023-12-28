#include <iostream>
using namespace std;
class empoly
{
  public:
    static int count;
    int id;
    int sarly;
    empoly(void);
    void getinfor(void);
};
int empoly ::  count =1;
empoly :: empoly (void)
{
    id = count;
    sarly = 382;
    count++;
}
void empoly :: getinfor(void)
{
    cout<<"empoly in id "<<id<<endl;
    cout<<"empoly in sarly "<<sarly<<endl;
}
class program : private empoly
{
  int code;
  static int dcount;
  public:
  void disply(void);
  program(void);
};
int program :: dcount=21;
program :: program(void)
{
  id = dcount;
  sarly = 100000;
  code = 24;
  dcount++;
}
void program :: disply(void)
{
   cout<<"program in id "<<id<<endl;
   cout<<"program in sarly "<<sarly<<endl;
   cout<<"program in code "<<code<<endl;
}
int main()
{
   empoly member[2];
   member[0].getinfor();
   member[1].getinfor();
   program stop[3];
   stop[0].disply();
   stop[1].disply();
   //visibility mode turn on public
  //cout<<"after a visibility public mode "<<stop[2].id<<endl;
   return 0;
}
/*
  note:
    1.constractors use in array in object in this way.
    2.base class is empoly and derived class is program.
    3.Inheritance in base class only inheritance a public method.
    4.Two type of visibility in Inheritance. 
         1.private visibility
         2.public visibility
    5.private visibility mode : public member of the base class become private member of the derived class
    6.public visibility mode : public member of the base class become public member of the derived class
    7.defult visibility is a private visibility.
*/  
