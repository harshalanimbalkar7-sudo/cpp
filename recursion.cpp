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


class Solution{	
	public:
		int NnumbersSum(int N){
            if(N==0){
                return 0;
            }
            return N + NnumbersSum(N-1);
		}
};

class Solution {
public:
    int factorial(int n) {
        if(n==0||n==1){
            return 1;
        }
        return n * factorial(n-1);
    }
};


class Solution{
public:
    void reverse(int arr[], int n){
        if (left >= right) {
            return;
        }

        swap(arr[left], arr[right]);
        helper(arr, left + 1, right - 1);
    }

    void reverse(int arr[], int n) {
        helper(arr, 0, n - 1);
    }
};
