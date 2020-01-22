//
// Created by İdil Uğurnal on 2020-01-22.
//

class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1) return s;
        int m = min(numRows , (int)s.length());

        vector <string> rows(m);;
        int cur = 0, size = s.size();
        bool up = false;

        for(int i = 0; i < size; i++){
            rows[cur] += s[i];
            if(cur == 0 || cur == numRows -1)
                up = !up;
            if(up)
                cur ++;
            else
                cur --;
        }

        string output = "";

        vector<string>::iterator it;
        for(it = rows.begin(); it < rows.end(); it++){
            output += *it;
        }
        return output;
    }
};