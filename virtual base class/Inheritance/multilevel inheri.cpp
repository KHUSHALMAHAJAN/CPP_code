#include <iostream>
using namespace std;
class student
{
  protected:
    int roll_no;
    char name[56];
    static int count;
  public:
    void set_infor(void);
    void get_infor(void);
};
int student :: count = 1;
void student :: set_infor(void)
{
  cout<<count<<".\n";
  cout<<"Enter a name\t";
  cin>>name;
  cout<<"Enter a roll no.    ";
  cin>>roll_no;
  count++;
}
void student :: get_infor(void)
{
  cout<<"your name is "<<name<<endl;
  cout<<"your roll no. are "<<roll_no<<endl;
}
class exam : public student
{
   protected:
     int PCI,AMC,BEC,EEC;
   public:
     void set_marks(void);
     void get_marks(void);
};
void exam :: set_marks(void)
{
   cout<<"Enter your marks carefully\n";
   cout<<"PCI  :   ";
   cin>>PCI;
   cout<<"AMC  :   ";
   cin>>AMC;
   cout<<"BEC  :   ";
   cin>>BEC;
   cout<<"EEC  :   ";
   cin>>EEC;
}
void exam :: get_marks(void)
{
   cout<<"your get mark is \n";
   cout<<"PCI  :   ";
   cout<<PCI;
   cout<<"\nAMC  :   ";
   cout<<AMC;
   cout<<"\nBEC  :   ";
   cout<<BEC;
   cout<<"\nEEC  :   ";
   cout<<EEC<<endl;
}
class result : public exam
{
   protected:
      float prec,team,sum;
   public:
      void make_perc(void);
      void full_infor(void);
}; 
void result :: make_perc(void)
{
   sum = PCI+AMC+BEC+EEC;
   team = sum/280;
   prec = team*100;
   //prec =45;
}
void result :: full_infor(void)
{
    cout<<"your precentage is "<<prec<<endl;
}
int main()
{
   result member[100];
   int i=1,dis;
   do
   {
     member[i].set_infor();
     member[i].set_marks();
     member[i].make_perc();
     cout<<"__________________________________________________________________\n";
     cout<<"You want continue press 1 or not 0:\t";
     cin>>dis;
     i++;
     cout<<"__________________________________________________________________\n";
   }while(dis==1);
   cout<<"Press 1 change in information\n"
       <<"press 2 not change\n";
    cin>>dis;
    cout<<"__________________________________________________________________\n";
    if(dis==1)
    {
      cout<<"Enter a number you want change\t";
      cin>>dis;
      member[dis].set_infor();
      member[dis].set_marks();
      member[dis].make_perc();
      member[dis].get_infor();
      member[dis].get_marks();
      cout<<"__________________________________________________________________\n";
    }
    for(int j=1;j<i;j++)
    {
      member[j].get_infor();
      member[j].get_marks();
      member[j].full_infor();
      cout<<"__________________________________________________________________\n";
    }
   return 0;
}
