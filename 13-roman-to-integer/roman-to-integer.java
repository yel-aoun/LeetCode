class Solution {
    public int value(char str) {
        int num = 0;
        if (str == 'I')
            num = 1;
        else if (str == 'V')
            num = 5;
        else if (str == 'X')
            num = 10;
        else if (str == 'L')
            num = 50;
        else if (str == 'C')
            num = 100;
        else if (str == 'D')
            num = 500;
        else if (str == 'M')
            num = 1000;
        return num;
    }
    public int romanToInt(String s) {
        int len = s.length();
        int result = 0;
        int a = 0;
        int b = 0;
        
        for(int i = 0; i < len;i++){
            a = value(s.charAt(i));
            if ( i + 1 < len)
                b = value(s.charAt(i + 1));
            if (a < b)
                result -= a;
            else
                result += a;
        }
        return result;
        
    }
}