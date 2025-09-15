#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
/***************************/
static bool cmp(int x, int y)
{
    return (x) < (y);
}
/***************************/
int main()
{
   vector<int> arr;
   arr.push_back(-1);
    arr.push_back(3);
    arr.push_back(-5);
    arr.push_back(7);   
    arr.push_back(2);
    arr.push_back(-4);  
    arr.push_back(6);
   for(int i=0; i<arr.size(); i++)
       cout<<arr[i]<<" ";
   cout<<"\n\n\n";
       sort(arr.begin(), arr.end(), cmp);
   for(int i=0; i<arr.size(); i++)
   {
    if(arr[i]%2==0)
       cout<<arr[i]<<" ";
   }
   cout<<"\n\n\n";
   for(int i=0; i<arr.size(); i++)
   {
    if(arr[i]%2!=0)
       cout<<-arr[i]<<" ";
   }
}