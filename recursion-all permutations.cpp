#include<bits/stdc++.h>
using namespace std;


void f(vector<int>& nums,int freq[],vector<vector<int>>& ans,vector<int>& ds){
    if(ds.size()==nums.size()){

        ans.push_back(ds);

        return;
    }

    for(int i=0;i<nums.size();i++){

        if(!freq[i]){
            freq[i]=1;
            cout<<"i is set of freq :"<<i<<" ";
            ds.push_back(nums[i]);
            cout<<"pushed "<<nums[i]<<" in ds"<<endl;
            f(nums,freq,ans,ds);
            cout<<"popped the last element whic is: "<<ds.back()<<" ";
            ds.pop_back();
            freq[i]=0;
            cout<<"i is unset of freq :"<<i<<endl;

        }
    }
}
vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>>ans;
    int arr[nums.size()]={0};
    vector<int>ds;
    f(nums,arr,ans,ds);
    return ans;
}
int main(){
    vector<vector<int>>ans;
    vector<int>v={1,2,3};
    ans=permute(v);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}
