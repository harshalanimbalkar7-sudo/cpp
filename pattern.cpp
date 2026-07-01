//pattern 1
class Solution {
public:
    void pattern1(int n) {
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"*";
        }
        cout<<endl;
     }
    }
};

//pattern 2
class Solution {
public:
    void pattern2(int n) {
        for(int i=1;i<=n;i++){
            for(int  j=1;j<=i;j++){
                cout<<"*";
            }
            cout<<endl;
        }
    }
};


//pattern 3
class Solution {
public:
    void pattern3(int n) {
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                cout<<j;
            }
            cout<<endl;
        }
    }
};


//pattern 4
class Solution {
public:
    void pattern4(int n) {
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                cout<<i;
            }
            cout<<endl;
        }
    }
};


//pattern 5
class Solution {
public:
    void pattern5(int n) {
        for(int i = n; i >= 1; i--) {
            for(int j = 1; j <= i; j++) {
                cout << "*";
            }
            cout << endl;
        }
    }
};

//pattern 6
class Solution {
public:
    void pattern6(int n) {
        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= i; j++) {
                cout << j;
            }
            cout << endl;
        }
    }
};


//pattern 7
class Solution {
public:
    void pattern7(int n) {
        for(int i = 0; i < n; i++) {

            // Print spaces
            for(int j = 0; j < n - i - 1; j++) {
                cout << " ";
            }

            // Print stars
            for(int j = 0; j < 2 * i + 1; j++) {
                cout << "*";
            }

            cout << endl;
        }
    }
};

//pattern 8
class Solution {
public:
    void pattern8(int n) {
        for(int i = 0; i < n; i++) {

            // Print leading spaces
            for(int j = 0; j < i; j++) {
                cout << " ";
            }

            // Print stars
            for(int j = 0; j < 2 * n - (2 * i + 1); j++) {
                cout << "*";
            }

            cout << endl;
        }
    }
};


//pattern 9
class Solution {
public:
    void pattern9(int n) {

        // Upper half
        for(int i = 1; i <= n; i++) {

            // Print spaces
            for(int j = 1; j <= n - i; j++) {
                cout << " ";
            }

            // Print stars
            for(int j = 1; j <= 2 * i - 1; j++) {
                cout << "*";
            }

            cout << endl;
        }

        // Lower half
        for(int i = n; i >= 1; i--) {

            // Print spaces
            for(int j = 1; j <= n - i; j++) {
                cout << " ";
            }

            // Print stars
            for(int j = 1; j <= 2 * i - 1; j++) {
                cout << "*";
            }

            cout << endl;
        }
    }
};


//pattern 10
class Solution {
public:
    void pattern10(int n) {

        // Upper half
        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= i; j++) {
                cout << "*";
            }
            cout << endl;
        }

        // Lower half
        for(int i = n - 1; i >= 1; i--) {
            for(int j = 1; j <= i; j++) {
                cout << "*";
            }
            cout << endl;
        }
    }
};

//pattern 11
class Solution {
public:
    void pattern11(int n) {
        for(int i = 1; i <= n; i++) {

            int start;

            if(i % 2 == 0)
                start = 0;
            else
                start = 1;

            for(int j = 1; j <= i; j++) {
                cout << start << " ";
                start = 1 - start;
            }

            cout << endl;
        }
    }
};

//pattern 12
class Solution {
public:
    void pattern12(int n) {

        int space = 2 * (n - 1);

        for(int i = 1; i <= n; i++) {

            // Print increasing numbers
            for(int j = 1; j <= i; j++) {
                cout << j;
            }

            // Print spaces
            for(int j = 1; j <= space; j++) {
                cout << " ";
            }

            // Print decreasing numbers
            for(int j = i; j >= 1; j--) {
                cout << j;
            }

            cout << endl;

            // Reduce spaces by 2 after each row
            space -= 2;
        }
    }
};

//pattern 13
class Solution {
public:
    void pattern13(int n) {

        int num = 1;

        for(int i = 1; i <= n; i++) {

            for(int j = 1; j <= i; j++) {
                cout << num << " ";
                num++;
            }

            cout << endl;
        }
    }
};

//pattern 14
class Solution {
public:
    void pattern14(int n) {
        for(int i=1;in;i++){
            for(vhar ch='A';ch<='A'+i;ch++){
                cout<<ch;
            }
            cout<<endl;
        }
    }
};

//pattern 15
class Solution {
public:
    void pattern15(int n) {
        for(int i=1;i>=n;i--){
            for(vhar ch='A';ch<='A'+i;ch++){
                cout<<ch;
            }
            cout<<endl;
}
    }
};

//pattern 16
class Solution {
public:
    void pattern16(int n) {
        for(int i=1;i<n;i++){
            char ch = 'A';
            for(int j=0;j<=i;j++){
                cout<<ch;
            }
            cout<<endl;
}
    }
};

//pattern 17
class Solution {
public:
    void pattern17(int n) {

        for(int i = 0; i < n; i++) {

            // Print spaces
            for(int j = 0; j < n - i - 1; j++) {
                cout << " ";
            }

            char ch = 'A';

            // Print increasing characters
            for(int j = 0; j <= i; j++) {
                cout << ch;
                ch++;
            }

            ch -= 2;

            // Print decreasing characters
            for(int j = 0; j < i; j++) {
                cout << ch;
                ch--;
            }

            cout << endl;
        }
    }
};

//patterm 18
class Solution {
public:
    void pattern18(int n) {

        for(int i = 0; i < n; i++) {

            for(char ch = ('A' + n - i - 1); ch <= 'A' + n - 1; ch++) {
                cout << ch;
            }

            cout << endl;
        }
    }
};