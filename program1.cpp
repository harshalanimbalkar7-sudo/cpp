// #include <iostream>
// using namespace std;
//  int main(){
//     int num;
//     cout<<"enter a number:";
//     cin>>num;
//     if(num%2==0){
//         cout<<"number is even";
//     }
//     else{
//         cout<<"number is odd";
//     }
//            return 0;
//  }

// #include <iostream>
// using namespace std;
// int main(){

//     int num;
//     cout <<"enter a number:";
//     cin>>num;


//     if(num>0){
//         cout<<"numbr id positive";
//     }else if(num<0){
//         cout<<"number is negative";
//     }else{
//         cout<<"numbe is zero";
//     }
//     return 0;
// }

// 

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     int sum=0;
//     cout<<"enter a number:";
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         sum +=i;
//     }
//     cout<<"sum of first "<<n<<" numbers is:"<<sum;
//     return 0;
// }

// #include<iostream>
// using namespace std;
// int add(int a, int b)
// {
//     return a+b;
// }
// int main(){
//     int x,y;
//     cout<<"enter 1st number:";
//     cin>>x;
//     cout<<"enter a 2nd number:";
//     cin>>y;
//     cout<<add(x,y); 
//     return 0;
// }

#include <iostream>
using namespace std;
int square(int a){
    return a*a;
}
int main(){
    int x;
    cout<<"enter a number:";
    cin>>x;
    cout<<square(x);
    return 0;
    
}