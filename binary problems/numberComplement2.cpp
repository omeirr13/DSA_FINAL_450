class Solution {
public:
    string getReverseBinaryAndComplement(int num)
    {
        string complement = "";
        while(num){
            int rem = num % 2;
            complement += ((rem + '0') == '0' ? '1' : '0');
            num /= 2;
        }
        return complement;
    }

    long long binaryToDecimal(string binary){
        long long num = 0;
        long long pow = 1;
        for(int i = 0;i<binary.length();i++){
            num += pow * (binary[i] - '0');
            cout << pow * (binary[i] - '0') << ' ';
            pow *= 2;
        }
        return num;
    }
    int findComplement(int num) {
        string complement = getReverseBinaryAndComplement(num);
        return binaryToDecimal(complement);
    }
};
