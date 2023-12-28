#include <iostream>
using namespace std;
class empoly
{
  private:
    int id;
    char firstname;
    static int count;
  public:
    void getinfor(void);
    void displyinfor(void);
    static void stasticfun(void);
};
int empoly :: count=1;
void empoly :: stasticfun(void)
{
  cout<<"A static function \n";
  cout<<count<<endl;
}
void empoly :: getinfor(void)
{
  cout<<"Enter a id number of "<<count<<endl;
  cin>>id;
  cout<<"Enter s first Name of person \n";
  cin>>firstname;
  count++;
}
void empoly :: displyinfor(void)
{
  cout<<"A number is "<<count <<" id "<<id<<endl;
  cout<<" fist name is "<<firstname<<endl;
}
int main()
{
  empoly khushal,kunal,mahajan;
  khushal.getinfor();
  khushal.displyinfor();
  kunal.getinfor();
  kunal.displyinfor();
  mahajan.getinfor();
  mahajan.displyinfor();
  //empoly::stasticfun();
  khushal.stasticfun();
  return 0;
}

