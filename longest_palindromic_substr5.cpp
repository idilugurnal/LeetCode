//
// Created by İdil Uğurnal on 2020-01-22.
//

class Solution {
public:
    string longestPalindrome(string s) {
        int size = s.length();
        bool **arr = new bool*[size];
        int start = 0, max = 1;

        for(int i = 0; i < size; i++){
            arr[i] = new bool[size];
            for(int j = 0; j < size; j++){

                arr[i][j] = false;
                if(i == j){
                    //k = 1
                    arr[i][j] = true;
                }
            }
        }
        //k = 2
        for(int i = 0; i < size; i++){
            if(s[i] == s[i + 1]){
                arr[i][i+1] = true;
                max = 2;
                start = i;
            }
        }
        //k more than 3
        for(int k = 3; k <= size; k ++){

            for(int i = 0; i < size - k + 1; i++){
                if(s[i] == s[i + k -1] && arr[i+1][i+k-2]){

                    arr[i][i+k-1] = true;
                    start = i;
                    max = k;
                }
            }
        }


        return s.substr(start,max);
    }
};