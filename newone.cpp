#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
  vector<int>v1(5);
   vector<int>v2(4,1);
    vector<int>v3(8,2);
     vector<int>v4(4,3);
      vector<int>v5(5,4);
       vector<int>v6(5,5);
        vector<int>v7(5,6);
        vector< vector<int>>vv;
        vv.push_back(v1);
        vv.push_back(v2);
        vv.push_back(v3);
        vv.push_back(v4);
        vv.push_back(v5);
        vv.push_back(v6);
        vv.push_back(v7);
        for(int i=0;i<vv.size();i++)
        {
            for(int j=0;j<vv[1].size();j++)
            {
                cout<<vv[i] [j]<<"w ";

            }
            cout<< "\n";
        }

}


