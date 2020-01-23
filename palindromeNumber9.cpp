//
// Created by İdil Uğurnal on 2020-01-23.
//

#include <deque>
class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;
        deque <int> number;
        while (x > 0){
            number.push_front(x%10);
            x = x/10;
        }
        while(!number.empty()){
            if(number.front() != number.back()) return false;
            number.pop_front();
            if(!number.empty()) number.pop_back();
        }

        return true;
    }
};