#include <iostream>
#include <functional>
#include <algorithm>
using namespace std;
int main()
{
  int arr[] = {15,3,7,543,65};
  sort(arr,arr+5);
  sort(arr,arr+5,greater<int>());
  for(int i = 0;i<5;i++)
  {
    cout<<arr[i]<<endl;
  }
  return 0;
}
