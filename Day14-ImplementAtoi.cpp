class Solution {
  public:
    int myAtoi(char *s) {
        
        int sign = 1, i = 0;
        long long res = 0;
        int n = strlen(s);
        
        while(i < n && s[i] == ' '){
            i++;
        }
        
        if( i < n && (s[i] == '-' || s[i] == '+')){
            sign = (s[i] == '-') ? -1 : 1;
            i++;
        }
        while(i < n && isdigit(s[i])){
           int digit = s[i]-'0';
           
           if(res > (INT_MAX - digit) / 10){
               return (sign == 1) ? INT_MAX : INT_MIN;
               }
            
            res = res*10 + digit;
            i++;
           
        }
        
        return res*sign;
        
    }
};

