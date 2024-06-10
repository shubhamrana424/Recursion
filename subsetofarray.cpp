#include<iostream>
#include<vector>
using namespace std;


void solve(vector<int>& nums, vector<int> op, vector<vector<int>>& ans, int i )
    {
        //base case
        if(i == nums.size())
        {
            ans.push_back(op);
            return ;
        }
        // exclude
        solve(nums, op, ans, i + 1);
        // include
        op.push_back(nums[i]);
        solve(nums, op, ans, i + 1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        int i = 0;
        vector<int> op;
        solve(nums, op, ans, i);
        return ans;
    }

int main() {
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> ans = subsets(nums);
    for(auto i : ans)
    {
        cout << "{ ";
        for( auto j : i)
        {
            cout << j << " ";
        }
        cout << " }  "  << "  ";
       // cout << endl;
    }
    return 0;
}