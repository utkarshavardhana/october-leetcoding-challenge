class Solution {
public:
    int bitwiseComplement(int N) {
        string str;
        while(N) {
            str += '0' + N % 2;
            N /= 2;
        }
        if(str.empty()) str = "0";
        for(char &c : str) {
            if(c == '0')    c = '1';
            else    c = '0';
            cout<<c<<" ";
        }
        reverse(str.begin(), str.end());
        int num = 0;
        for(char c : str) {
            num *= 2;
            num += c-'0';
        }
        return num;
    }
};
