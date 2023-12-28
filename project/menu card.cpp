       /* this program is depled for a made a menu card with gst are your choice*/ 
#include<iostream>
using namespace std;
class shop
{
  private:
   int itemid[100];  //using array
   int origprice[100];
   int gst[100];
   int totalprice[100];
   int count=0;
  public:
   //void initinalitem(void) {count == 0;}
   void setitem(void);
   void displyitem(void);
   void nextmem(void);
};
void shop :: setitem(void)
{
  cout<<"Enter a id number "<<count+1<<"\t";
  cin>>itemid[count];
  cout<<"Enter a origal price\t";
  cin>>origprice[count];
  cout<<"Enter a gst %\t";
  cin>>gst[count];
  if(gst[count]>100)
  {
    cout<<"This not allout repid this id \n";
  }
  totalprice[count]=origprice[count]+(origprice[count]*gst[count]/100);
  cout<<"A total price is \t"<<totalprice[count]<<endl;
  count++;
  nextmem(); // using a nesting of member funtion
}
void shop :: displyitem(void)
{
  cout<<"Id no.\t\torigal price\tgst %\t\ttotal price\n";
  for(int i=0;i<=count-1;i++)
   {
     cout<<itemid[i]<<"\t\t"<<origprice[i]<<"\t\t"<<gst[i]<<"%\t\t"<<totalprice[i]<<endl;
   }
}
void shop :: nextmem(void)
{
  cout<<"\n\n new item add \n\n";
}
int main()
{
 shop dukan;
 int code;
 cout<<"Enter a code please\t";
 cin>>code;
 if(code==24)
 {
   cout<<"!!!!  Welcome sir  !!!!\n";
   int n;
   do
    {
      dukan.setitem();
      cout<<"you want continue\n";
      cout<<"Yes == 1 OR No == 2\n";
      cin>>n;
     }while(n==1);
    dukan.displyitem();
 }
 else
 {
  cout<<"Wrong code\n";
  return 0;
 }
 return 0;
}
