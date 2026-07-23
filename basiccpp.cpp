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