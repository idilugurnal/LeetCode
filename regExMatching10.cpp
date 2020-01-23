//
// Created by İdil Uğurnal on 2020-01-23.
//

class Solution {
public:
    bool isMatch(string s, string p) {
        if(p.size() == 0) return s.size() == 0;

        bool match = ((s.size() > 0) && (p[0] == s[0] || p[0] == '.'));

        if(p.size() >= 2 && p[1] == '*')
            return (isMatch(s, p.substr(2, p.size())) ||
                    (match && isMatch(s.substr(1 , s.size()), p)));
        else
            return match && isMatch(s.substr(1, s.size()) , p.substr(1,p.size()));
    }
};