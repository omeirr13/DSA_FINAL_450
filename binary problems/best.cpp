class Solution {
public:
    int getReverseBinaryAndComplementAndEvaluate(int num)
    {
        int curr;
        int decimal = 0;
        long long pow = 1;
        while(num){
            int rem = num % 2;
            curr = ((rem + '0') == '0' ? 1 : 0);
            decimal += pow * curr;
            pow *= 2;
            num /= 2;
        }
        return decimal;
    }

    int findComplement(int num) {
        return getReverseBinaryAndComplementAndEvaluate(num);
    }
};
