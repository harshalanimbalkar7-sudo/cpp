// #include <iostream>
// using namespace std;

// int sum(int a, int b)
// {
//     return a + b;
// }

// int main()
// {
//     int a, b;
//     cin >> a >> b;
//     cout << "Sum = " << sum(a, b);
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int cube(int n)
// {
//     return n * n * n;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     cout << cube(n);
//     return 0;
// }


// #include <iostream>
// using namespace std;

// void evenOdd(int n)
// {
//     if (n % 2 == 0)
//         cout << "Even";
//     else
//         cout << "Odd";
// }

// int main()
// {
//     int n;
//     cin >> n;
//     evenOdd(n);
//     return 0;
// }

// #include <iostream>
// using namespace std;

// void swapNum(int &a, int &b)
// {
//     int temp = a;
//     a = b;
//     b = temp;
// }

// int main()
// {
//     int a, b;
//     cin >> a >> b;

//     swapNum(a, b);

//     cout << a << " " << b;
//     return 0;
// }

#include <iostream>
using namespace std;

int factorial(int n)
{
    int fact = 1;

    for (int i = 1; i <= n; i++)
        fact = fact * i;

    return fact;
}

int main()
{
    int n;
    cin >> n;

    cout << factorial(n);

    return 0;
}