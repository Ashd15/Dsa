#include<iostream>
#include<vector>
using namespace std;
int unique(vector<int>ar,int ans)
{
 for(int i=0;i<ar.size();i++)
 {
    ans=ans^ar[i];
 }
 return ans;
}
int main()
{
    vector<int>ar={1,1,2,2,3,4,3,5,5};
    int ans=0;
    int ans1= unique(ar,ans);
    cout<<ans1;
}