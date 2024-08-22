class Solution {
public:
    string getReverseBinary(int num)
    {
        string binary = "";
        while(num){
            int rem = num % 2;
            binary += rem + '0';
            num /= 2;
        }
        return binary;
    }

    string getComplement(string binary){
        for(int i = 0;i<binary.length();i++){
            binary[i] = (binary[i] == '0') ? '1' : '0';
        }
        return binary;
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
        string binary = getReverseBinary(num);
        cout << binary;
        string complement = getComplement(binary);    
        return binaryToDecimal(complement);
    }
};
