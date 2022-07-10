#include<bits/stdc++.h>
using namespace std;


void helper(vector<int> &nums,int i,vector<int> subset, vector<vector<int>> &ans){


    if(i == nums.size()){
        ans.push_back(subset);
        return;
    }

    // include
    subset.push_back(nums[i]);
    helper(nums,i+1,subset,ans);

    // not include
    subset.pop_back();
    helper(nums,i+1,subset,ans);
}

vector<vector<int>> pset(vector<int> &nums){
    vector<vector<int>> ans;
    vector<int> subset;
    helper(nums,0,subset,ans);
    return ans;

}

int main(){
  vector<int> nums={1,2,3};
  vector<vector<int>> result = pset(nums);

    // Displaying the 2D vector
    for (int i = 0; i < result.size(); i++) {
        for (int j = 0; j < result[i].size(); j++)
            cout << result[i][j] << " ";
        cout << endl;
    }
    return 0;

}