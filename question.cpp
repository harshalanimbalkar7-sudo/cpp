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



class Solution {
public:
    bool isPalindrome(int n) {
 int original = n;
        int rev = 0;

        while (n > 0) {
            int digit = n % 10;
            rev = rev * 10 + digit;
            n = n / 10;
        }

        return original == rev;
    }
};

class Solution {
public:
    int GCD(int n1,int n2) {
        while(n2!=0){
            int rem=n1 % n2;
            n1=n2;
            n2=rem;
        }
        return n1;
    }
};