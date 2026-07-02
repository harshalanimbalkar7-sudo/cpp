<<<<<<< HEAD
class Solution {
public:
    int countDigit(int n) {
        if(n==0)
        return 1;
        int count=0;
        while(n>0){
            count++;
            n=n/10;
        }
        return count;
    }
};


class Solution {
public:
    int reverseNumber(int n) {
        int rev=0;
        while(n>0){
            int digit=n%10;
            rev=rev*10+digit;
            n=n/10;
        }
        return rev;
    }
};
=======
class Solution {
public:
    int countDigit(int n) {
        if(n==0)
        return 1;
        int count=0;
        while(n>0){
            count++;
            n=n/10;
        }
        return count;
    }
};
>>>>>>> 8027f7a6f0f78c5a320d1139afcf4737ddcfa4f1
