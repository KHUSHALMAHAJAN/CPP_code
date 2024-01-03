#include <iostream>
#include <map>
#include <string>
using namespace std;
int main()
{
  map<string,int>markmap;
  markmap["khushal"] = 90;
  markmap["kunal"] = 98;
  markmap["mahajan"] = 80;
  map<string ,int> :: iterator iter;
  for(iter = markmap.begin();iter != markmap.end();iter++)
  {
     cout<<(*iter).first<<"  "<<(*iter).second<<endl;
  }
  cout<<"size of mark map "<<markmap.size()<<endl;
  return 0;
}
