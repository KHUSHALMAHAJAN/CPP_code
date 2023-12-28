#include <iostream>
#include <cmath>
using namespace std;
int gx1,gx2,gy1,gy2;
class point1
{
   private:
     int x1,y1;
   public:
     point1(void);
     void exctra1(void);
};
point1 :: point1(void)
{
   cout<<"Enter a point : x1 = ";
   cin>>x1;
   gx1=x1;
   cout<<"Enter a point : y1 = ";
   cin>>y1;
   gy1=y1;
}
class point2 
{
   private:
     int x2,y2;
   public:
      point2(void);
      void exctra2(void);
};  
point2 :: point2(void)
{
   cout<<"Enter a point : x2 = ";
   cin>>x2;
   gx2=x2;
   cout<<"Enter a point : y2 = ";
   cin>>y2;
   gy2=y2;
}
void distance(int gx1,int gx2,int gy1,int gy2)
{
   int sol;
   sol = (gx2-gx1)*(gx2-gx1)+(gy2-gy1)*(gy2-gy1);
   int ans = sqrt(sol);
   cout<<"Ans is "<<ans<<endl;
}
void point1 :: exctra1(void)
{
}
void point2 :: exctra2(void)
{
}
int main()
{
  point1 obj1;
  obj1.exctra1();
  point2 obj2;
  obj2.exctra2();
  distance(gx1,gx2,gy1,gy2);
  return 0;
}
