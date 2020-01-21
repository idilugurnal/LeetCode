//
// Created by İdil Uğurnal on 2020-01-22.
//
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        int size1 = nums1.size();
        int size2 = nums2.size();
        int it1 = 0, it2 = 0;
        while(it1 < size1 || it2 < size2){
            if(!(it1 < size1)){
                result.push_back(nums2[it2]);
                it2++;
            }
            else if(!(it2 < size2)){
                result.push_back(nums1[it1]);
                it1++;
            }
            else if(nums1[it1] < nums2[it2]){
                result.push_back(nums1[it1]);
                it1++;
            }
            else{
                result.push_back(nums2[it2]);
                it2++;
            }
        }
        int size = result.size();
        if(size % 2)
            return (double) result[size/2];
        else
            return (result[size/2] + result[size/2 - 1]) / 2.0;
    }
};

