#include<iostream>
#include<vector>
using namespace std;
string mapping[10] = {"","", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    void solve (string digits, string output, int index, vector<string> &ans) {
        if (index >= digits.size()) {
            ans.push_back(output);
             return;
        } else {
            int number = digits[index] - '0';
            string value = mapping[number];
            for (int i = 0; i < value.size(); i++) {
               
                output.push_back(value[i]);
                solve(digits, output, index + 1, ans);
                output.pop_back();
            }
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if (digits == "") {
            return ans;
        }
        string output = "";
        int index = 0;
        solve(digits, output, index, ans);
        return ans;
    }

int main(){
    vector<string> ans= letterCombinations("23");
    
    for(int i=0;i<ans.size();i++) {
       cout<<ans[i]<<" ";
    }
}