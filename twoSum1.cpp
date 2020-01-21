//
// Created by İdil Uğurnal on 2020-01-22.
//

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;
        for(auto i = nums.begin(); i< nums.end(); i++){
            int key = target - *i;
            auto it = find(nums.begin() , nums.end() , key);
            if(it!=nums.end() && i != it){
                result.push_back(distance(nums.begin() , i));
                result.push_back(distance(nums.begin() , it));
                return result;
            }
        }
        return result;
    }

};

