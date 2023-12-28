#include <iostream>
using namespace std;
int main()
{

  int a =8;
  int *ptr = &a;
  cout<<a<<endl
      <<&a<<endl
      <<*ptr<<endl
      <<ptr<<endl;

  cout<<"new keyword use\n";
  int *i = new int(40);
  cout<<i<<endl
      <<*i<<endl;
  *i = 20;
  cout<<i<<endl
      <<*i<<endl;
  //input are success
  int get;
  cin>>get;
  int *n = new int(get);
  cout<<n<<endl
      <<*n<<endl;
  cout<<"delete  keyword\n";
  delete i;
  cout<<i<<endl
      <<*i<<endl; 
  /*char ch;
  cin>>ch;
  delete ch;
  cout<<ch<<endl
      <<*ch<<endl;
  */
  //array use
  cout<<"array use\n new keyword\n";
  int *arr = new int[3];
  arr[0] = 1;
  arr[1] = 2;
  arr[2] = 3;
  for(int j=0;j<3;j++)
  {
    cout<<"arr["<<j<<"] = "<<arr[j]<<endl;
  }
  delete[] arr;
  for(int j=0;j<3;j++)
  {
    cout<<"arr["<<j<<"] = "<<arr[j]<<endl;
  }
  return 0;
}
