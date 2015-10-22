class Solution {
public:
    int myAtoi(string str) {
      int sign = 1;
      long s = 0;
      int i = 0;
       i = str.find_first_not_of(' ');
      if(str[i]=='+' || str[i]=='-'){
        sign = (str[i]=='+')? 1 :-1;
          i++;
      }
      while(str[i]>='0' && str[i]<='9'){
          s = 10*s+str[i]-'0';
          if(s*sign>= INT_MAX)
            return INT_MAX;
          if(s*sign<=INT_MIN)
          return INT_MIN;
          i++;
          if(i==str.length())
          break;
      }
      return s*sign;

    }
};