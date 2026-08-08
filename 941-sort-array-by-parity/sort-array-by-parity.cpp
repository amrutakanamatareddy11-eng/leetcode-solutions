class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        vector<int> sol1;
        vector<int> sol2;
        for(int i=0; i<nums.size();i++){
        if(nums[i]%2==0){
            sol1.push_back(nums[i]);
        }
        else{
            sol2.push_back(nums[i]);
        }
    }
        for(int i=0; i<sol2.size(); i++){
            sol1.push_back(sol2[i]);
        }
        return sol1;
    }
};