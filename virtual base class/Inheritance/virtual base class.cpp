#include<iostream>
using namespace std;
class student 
{
   protected:
      int roll_no;
   public:
      void set_number(void);
      void print_number(void);
};
void student :: set_number(void)
{
   //roll_no = a;
   roll_no = 01;
}
void student :: print_number(void)
{
   cout<<"Your roll no is "<<roll_no<<endl;
}
class test : virtual public student
{
   protected:
     int physic,math;
   public:
      void set_marks(int m1,int m2);
      void print_marks(void);
};
void test :: set_marks(int m1,int m2)
{
   physic = m1;
   math = m2;
   //you are change a roll_no later will this carry value
   roll_no = 05;
}
void test :: print_marks(void)
{
  cout<<"physic marks is "<<physic<<endl;
  cout<<"math marks is "<<math<<endl;
}
class sport : virtual public student
{
   protected:
     int score;
   public:
     void set_score(int sc);
     void print_score(void);
};
void sport :: set_score(int sc)
{
  score = sc;
}
void sport :: print_score(void)
{
   cout<<"Your score is "<<score<<endl;
}
class result : public test,public sport
{
   int total;
   public:
  void set_total(void);
  void print_total(void);
};
void result :: set_total(void)
{
  total = score + math + physic;
}
void result :: print_total(void)
{
   cout<<"Your total is "<<total<<endl; 
}
int main()
{
   result khushal;
   khushal.set_number();
   khushal.set_marks(54,37);
   khushal.set_score(90);
   khushal.set_total();
   khushal.print_number();
   khushal.print_marks();
   khushal.print_score();
   khushal.print_total();
   return 0;
}

