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

#include <iostream>
using namespace std;

int cube(int n)
{
    return n * n * n;
}

int main()
{
    int n;
    cin >> n;
    cout << cube(n);
    return 0;
}