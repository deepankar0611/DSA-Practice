#include <iostream>
using namespace std;

int main() {
    // char n = 5;
    // for (int i = 0; i < n; i++){
    //     char ch = 'A';
    //     for (int j = 0; j < n; j++){
    //         cout << ch;
    //         ch = ch+1;
    //     }
    //     cout << endl;
    // }
    // return 0;



    // 1 2 3 
    //4 5 6 
    //7 8 9  pattern


    // int n = 3;

    // int num = 1;
    // for (int i = 0; i < n; i++){
    //     for (int j = 0; j < n; j++){
    //         cout << num << " ";
    //         num++;
    //     }
    //     cout << endl;
    // }
    // return 0;


    int n = 3;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < i+1; j++){
            cout << i+1 ;
        }
        cout << endl;
    }
    return 0;


    
}