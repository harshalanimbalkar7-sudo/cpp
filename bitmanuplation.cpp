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


//15-10-26
class Solution {
public:
    int setRightmostUnsetBit(int n) {
        return n | (n + 1);
    }
};

class Solution {
public:
    void swapNumbers(int &a, int &b) {
        a = a + b;
        b = a - b;
        a = a - b;
    }
};