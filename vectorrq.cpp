#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
/***************************/
static bool cmp(int x, int y)
{
    if(x%2==0 && y%2==0)
         return (x>y);
    if(x%2!=0 && y%2!=0)
            return (x<y);
    if (x%2==0 && y%2!=0)
         return true;
    if (x%2!=0 && y%2==0)
         return false;
}
/***************************/
int main()
{
   vector<int> arr;
   arr.push_back(17);
    arr.push_back(6);
    arr.push_back(9);
    arr.push_back(12);   
    arr.push_back(15);
    arr.push_back(16);  
    arr.push_back(1);
    arr.push_back(3);
    arr.push_back(8);
    arr.push_back(2);
    arr.push_back(7);
   for(int i=0; i<arr.size(); i++)
       cout<<arr[i]<<" ";
   cout<<"\n\n\n";
       sort(arr.begin(), arr.end(),cmp);
   for(int i=0; i<arr.size(); i++)
       cout<<arr[i]<<" ";
}