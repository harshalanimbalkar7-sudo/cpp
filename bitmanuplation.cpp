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


class Solution {
public:
    int xorUpto(int n) {
        if (n % 4 == 0) return n;
        if (n % 4 == 1) return 1;
        if (n % 4 == 2) return n + 1;
        return 0;
    }

    int findXOR(int L, int R) {
        return xorUpto(R) ^ xorUpto(L - 1);
    }
};