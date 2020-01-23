//
// Created by İdil Uğurnal on 2020-01-22.
//

class Solution {
public:
    int myAtoi(string str) {

        int base=0,cur=0;
        int sign=1;
        while(cur<str.size()&&str[cur]==' ') cur++;
        if(str[cur] == '+'){
            cur++;
            if(str[cur] =='-') return 0;

        }
        else if(str[cur]=='-')
        {
            sign=-1;
            cur++;
        }
        while(cur<str.size()&&(str[cur]>='0'&&str[cur]<='9'))
        {
            if(base>INT_MAX/10 || (base==INT_MAX/10&&str[cur]-'0'>7))
                if(sign == -1) return INT_MIN;
                else return INT_MAX;

            base*=10;
            base+=str[cur]-'0';
            cur++;
        }
        return sign > 0? base: -base;
    }
};