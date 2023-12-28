#include <iostream>
#include<iomanip>
using namespace std;
class student
{
  private:
    int a,b;
  public:
    int c,d,e;
    //int i;
    void pri(int a1,int b1);
    void pub()
    {
      cout<<"a is private "<<setw(5)<<a<<endl;
      cout<<"b is private "<<setw(5)<<b<<endl;
      cout<<"c is public "<<setw(6)<<c<<endl;
      cout<<"d is public "<<setw(6)<<d<<endl;
      cout<<"e is public "<<setw(6)<<e<<endl;
      cout<<i<<endl;
    }
    int i;
};
/*void student :: pri(int a1,int b1)
{
 a=a1;
 b=b1 ;
}*/
int main()
{
  student khushal[3],kunal;
  /*khushal.c =3;
  khushal.d =4;
  khushal.e =5;
  khushal.i =23;*/
  
  khushal[0].c =10;
  khushal[0].d =20;
  khushal[0].e =30;
  khushal[0].i =40;
  khushal[1].c =11;
  khushal[1].d =21;
  khushal[1].e =31;
  //khushal[1].i =41;
  kunal.c =13;
  kunal.d =14;
  kunal.e =15;
  kunal.i =123;
  kunal.pri(1,2);
  kunal.pub();
  //khushal.i=23;
  //cout<<khushal.i<<endl;
  //cout<<"a is private "<<setw(5)<<khushal.a<<endl;
  //cout<<"b is private "<<setw(5)<<khushal.b<<endl;
  /*cout<<"c is public khushal"<<setw(6)<<khushal.c<<endl;
  cout<<"d is public khushal"<<setw(6)<<khushal.d<<endl;
  cout<<"e is public khushal"<<setw(6)<<khushal.e<<endl;*/
  cout<<"c is public khushal[0]"<<setw(6)<<khushal[0].c<<endl;
  cout<<"d is public khushal[0]"<<setw(6)<<khushal[0].d<<endl;  
  cout<<"e is public khushal[0]"<<setw(6)<<khushal[0].e<<endl;
  cout<<khushal[0].i<<endl;  
  cout<<"c is public khushal[1]"<<setw(6)<<khushal[1].c<<endl;
  cout<<"d is public khushal[1]"<<setw(6)<<khushal[1].d<<endl;
  cout<<"e is public khushal[1]"<<setw(6)<<khushal[1].e<<endl;
  //cout<<khushal.i[1]<<endl;
  cout<<"c is public kunal"<<setw(6)<<kunal.c<<endl;
  cout<<"d is public kunal"<<setw(6)<<kunal.d<<endl;
  cout<<"e is public kuanl"<<setw(6)<<kunal.e<<endl;
  return 0;
}
void student :: pri(int a1,int b1)
{
 a=a1;
 b=b1 ;
}
