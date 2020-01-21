//
// Created by İdil Uğurnal on 2020-01-22.
//

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int first = 0, second = 1, max = 1;

        if(s.size() < 1)
            return 0;

        while(first < s.size() && second < s.size()){
            int total = 1;
            for(int i =first; i < second; i ++){
                if(s[second] == s[i]){
                    first += 1;
                    second = first;
                    total = 1;
                    break;
                }
                total++;
                if(total > max)
                    max = total;
            }
            second++;
        }

        return max;
    }
};