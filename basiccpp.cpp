class Solution {
public:
    void printNumber() {
        cout << n;
    }
};


class Solution {
public:
    void grade(int marks) {
        if (marks >= 90)
            cout << "Grade A";
        else if (marks >= 70)
            cout << "Grade B";
        else if (marks >= 50)
            cout << "Grade C";
        else if (marks >= 35)
            cout << "Grade D";
        else
            cout << "Fail";
    }
};

class Solution {
public:
    void weekDay(int day) {

        switch(day) {
            case 1:
                cout << "Monday";
                break;
            case 2:
                cout << "Tuesday";
                break;
            case 3:
                cout << "Wednesday";
                break;
            case 4:
                cout << "Thursday";
                break;
            case 5:
                cout << "Friday";
                break;
            case 6:
                cout << "Saturday";
                break;
            case 7:
                cout << "Sunday";
                break;
            default:
                cout << "Invalid";
        }
    }
};


class Solution {
public:
    int sum(int low, int high) {

        int total = 0;

        for (int i = low; i <= high; i++) {
            total += i;
        }

        return total;
    }
};


class Solution {
public:
    int sumOfFirst50Numbers(int d) {

        int count = 0;
        int num = d;
        int sum = 0;

        // Handle the case when d = 0
        if (d == 0)
            num = 10;

        while (count < 50) {
            sum += num;
            num += 10;
            count++;
        }

        return sum;
    }
};

class Solution {
public:
    void reverseArray(vector<int>& arr) {

        int left = 0;
        int right = arr.size() - 1;

        while (left < right) {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
};