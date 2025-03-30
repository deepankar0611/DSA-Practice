#include <iostream>
using namespace std;

int main() {   

// char n;
// cout << "Enter a number: ";
// cin >> n;
// if (n >= 'a' && n <= 'z') {
//     cout << "Lowercase letter" << endl;
// } else if (n >= 'A' && n <= 'Z') {
//     cout << "Uppercase letter" << endl;
// } else if (n >= '0' && n <= '9') {
//     cout << "Digit" << endl;
// } else
// {
//     cout << "Special character" << endl;
// }


// print sum of n natural numbers

// int n;
// cout << "Enter a number: ";
// cin >> n;
// int sum = 0;

// for (int i = 1; i <= n; i++)
// {
//     sum += i;
// }

// cout <<sum<< endl;
// return 0;


// print sum of odd numbers

// int n ;
// cout << "Enter a number: ";
// cin >> n;
// int oddSum = 0;

// for (int  i = 0; i <= n; i++)
// {
//    if (i % 2 != 0)
//    {
//     oddSum += i;
//    }
   
// }

// cout << "Sum of odd numbers: " << oddSum << endl;
// return 0;


//check the prime number

int n;
cout << "Enter a number: ";
cin >> n;
bool isPrime = true;

for (int i = 2; i <= n-1; i++)
{
    if (n % i == 0)
    {
        isPrime = false;
        break;
    }
}
if (isPrime == true)
{
    cout << "Prime number" << endl;
}
else
{
    cout << "Not a prime number" << endl;

    return 0;
}
}

