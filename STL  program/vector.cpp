#include <iostream>
#include <vector>
using namespace std;
template <class T>
void display(vector<T> &v)
{
   cout<<"display a function"<<endl;
   for(int i=0;i<v.size();i++)
   {
     cout<<v[i]<<endl;
    }
}
int main()
{
  /*vector<int> vec1;
  int element;
  for(int i=0;i<5;i++)
  {
    cout<<"Enter a number"<<endl;
    cin>>element;
    vec1.push_back(element);
  }
  //vec1.pop_back();
  display(vec1);
  vector<int> :: iterator iter = vec1.begin();
  vec1.insert(iter+1,4,56);
  display(vec1);*/
  vector<char> vec2(4);
  vec2.push_back('4');
  vec2.push_back('5');
  vec2.push_back('6');
  vec2.push_back('3');
  vec2.push_back('9');
  display(vec2);
  vector<char> vec3(vec2);
  display(vec3);
  vector<int> vec4(6,3);
  display(vec4);
  cout<<vec4.size()<<endl;
  return 0;
}
