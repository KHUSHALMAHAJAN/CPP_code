#include <iostream>
#include <list>
using namespace std;
void display(list<int> &lit)
{
  list<int> :: iterator iter;
  for(iter = lit.begin();iter != lit.end();iter++)
  {
    cout<<*iter<<endl;
  }
}
int main()
{
  list<int>list1;
  //list<int>list2;
  list1.push_back(83);
  list1.push_back(22);
  list1.push_back(57);
  list1.push_back(33);
  list1.push_back(3);
  display(list1);
  /*list<int> :: iterator iter;
  iter = list1.begin();
  cout<<*iter<<endl;
  iter++;
  cout<<*iter<<endl;*/
  list<int>list2(3);
  list<int> :: iterator iter;
  iter = list2.begin();
  *iter = 45;
  iter++;
  *iter = 6;
  iter++;
  *iter++ = 9;
  display(list2);
  /*iter = list2.end();
  *iter = 7;
  iter--;
  *iter = 3;
  iter--;
  *iter = 1;
  iter--;
  display(list2);*/
  //list1.remove(8);
  //display(list1);
  //list1.sort();
  //display(list1);
  list1.merge(list2);
  display(list1);
  return 0;
}
