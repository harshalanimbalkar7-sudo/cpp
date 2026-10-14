class Solution {
public:
    bool checkKthBit(int n, int i) {
        return (n & (1 << i)) != 0;
    }
};


class Solution {
public:
    bool isOdd(int n) {
        return n % 2 != 0; 
    }
};
