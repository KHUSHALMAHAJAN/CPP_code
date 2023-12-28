#include <iostream>
#include <cstring>
using namespace std;
class CWH
{
  public:
  int rate;
  string title;
  CWH(string ti,int r)
  {
     rate = r;
     title = ti;
  }
  virtual void disply() = 0;
};
class CWHVi : public CWH
{
  int vitime;
  public:
  CWHVi(int vi,string ti,int r):CWH(ti,r)
  {
    vitime = vi;
  }
  void disply()
  {
    cout<<"A title is video "<<title<<endl;
    cout<<"A rate is video "<<rate<<endl;
    cout<<"A video time is "<<vitime<<endl;
  }
};
class CWHTX : public CWH
{
  int word;
  public:
  CWHTX(int wi,string ti,int r):CWH(ti,r)
  {
    word = wi;
  }
  void disply()
  {
    cout<<"A title is tx "<<title<<endl;
    cout<<"A rate is tx "<<rate<<endl;
    cout<<"A tx in woprd is "<<word<<endl;
  }
};
int main()
{
   string title;
   int vitime,rate,word;
   title = "django tutorial";
   vitime = 7;
   rate = 5;
   CWHVi video(vitime,title,rate);
   //video.disply();
   title = "text";
   word = 456;
   CWHTX tx(word,title,rate);
   //tx.disply();
   CWH *obj[2];
   obj[0] = &video;
   obj[1] = &tx;
   obj[0]->disply();
   obj[1]->disply();
   return 0;
}
