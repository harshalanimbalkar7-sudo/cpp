class Solution {
  public:
    void printNumbers(int n) {
        if(n==0){
            return;
        }
        printNumbers(n-1);
        cout<<n<<endl;
    }
};

class Solution {
  public:
    void printNumbers(int n) {
        if(n==0){
            return;
        }
        cout<<n<<endl;
        printNumbers(n-1);
    }
};