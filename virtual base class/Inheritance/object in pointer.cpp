#include <iostream>
#include <string>

using namespace std;
class mall
{
   protected:
     char itemname[56];
     float price;
   public:
     void getinfor (void);
     void putinfor (void);
};
void mall :: getinfor(void)
{
   cout<<"Enter a name of item\t"; 
   cin>>itemname;
   cout<<"Enter a price of item\t";
   cin>>price;
}
void mall :: putinfor(void)
{
  cout<<"Item is "<<itemname<<endl;
  cout<<"Price is "<<price<<endl;
}
int main()
{
   mall *ptr = new mall[3];
   mall *ptrtemp = ptr;
   for(int i=0;i<3;i++)
   {
      cout<<"Enter name of item no."<<i+1<<endl;
      ptr->getinfor();
      ptr++;
   }
   for(int i=0;i<3;i++)
   {
      cout<<"Print name of item no."<<i+1<<endl;
      ptrtemp->putinfor();
      ptrtemp++;
   }
   return 0;
}
