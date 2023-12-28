#include <iostream>
using namespace std;
class student
{
   int var1;
   int var2;
    public:
     student(int a,int b);
     /*: var1(a),var2(b)
     {
     cout <<"constructor exeuction\n";
     cout<<"vaule of variable 1 is "<<var1<<endl;
     cout<<"vaule of variable 2 is "<<var2<<endl;
     }*/
};
student :: student(int a,int b) : var1(a),var2(var1+b)
{
     cout <<"constructor exeuction\n";
     cout<<"vaule of variable 1 is "<<var1<<endl;
     cout<<"vaule of variable 2 is "<<var2<<endl;
}
int main()
{
   student khushal(4,6);
   return 0;
}
