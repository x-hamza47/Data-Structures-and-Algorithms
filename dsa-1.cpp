#include <iostream>

using namespace std;

int main()
{

    //? ========================
    // Info: Square Pattern
    //? ========================
    // int n = 3;
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= n; j++) {
    //         cout<< "* ";
    //     }
    //     cout<<endl;
    // }
    // int n = 4;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int i = 0; i < n; i++)
    //     {
    //         cout<< i + 1;
    //     }

    //     cout<< endl;
    // }
    
    // ! Printing Chars in square pattern
    // for (int i = 0; i < n; i++)
    // {
    //     char ch = 'A';
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << ch << " ";
    //         ch = ch + 1;
    //     }
    //     cout << endl;
    // }

    //* ============================
    // * Square Pattern Practice 2
    //* ============================
    // int num = 1;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n ; j++)
    //     {
    //         cout << num << " ";
    //         num++;
    //     }
    //     cout << endl;
    // }

    //? ========================
    // Info: Triangle Pattern
    //? ========================
    // int n = 10;

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i + 1; j++) {
    //         cout<< "* ";
    //         // cout<< (i + 1);
    //     }
    //     cout<<endl;
    // }

    

    // char c = 'A';
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i + 1; j++) {
    //       cout << c << " ";
    //     }
    //     c = c + 1;
    //     cout<<endl;
    // }

    // ! Self Solved
    // for (int i = 0; i < n; i++)
    // {
    //     int num = 1;
    //     for (int j = 0; j < i + 1; j++)
    //     {
    //         cout << num << " ";
    //         num++;
    //     }
    //     cout << endl;
    // }

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j < i + 1; j++)
    //     {
    //         cout << j;
    //     }
    //     cout << endl;
    // }

    // int num = 1;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i + 1 ; j++)
    //     {
    //         cout << num << " ";
    //         num++;
    //     }
    //     cout << endl;
    // }

    // char c = 'A';
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i + 1; j++)
    //     {
    //         cout << c << " ";
    //         c++;
    //     }
    //     cout << endl;
    // }

    //* ============================
    // * Inverted Triangle Pattern
    //* ============================

    // for (int i = n; i > 0; i--)
    // {
    //     for (int j = 0; j < i ; j++) {
    //         cout<< " ";
    //     }
    //     for (int j = 0; j < n - i; j++) {
    //         cout<< (i) << " ";
    //         // cout<< "* ";
    //     }
    //     cout<<endl;
    // }

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < i ; j++) {
    //         cout<< " ";
    //     }
    //     for (int j = 0; j < n - i; j++) {
    //         cout<< (i + 1) << " ";
    //         // cout<< "* ";
    //     }
    //     cout<<endl;
    // }

    //? ========================
    // Info: Pyramid Pattern
    //? ========================
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n - i - 1; j++) {
    //         cout<< " ";
    //     }
    //     for (int j = 1; j <= i + 1; j++) {
    //         cout<< j;

    //     }
    //     for (int j = i ; j > 0; j--) {
    //         cout<< j;
    //     }
    //     cout<<endl;
    // }

    //? ==========================
    // Info: Hollow Diamon Pattern
    //? ==========================

    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n - i - 1; j++){
    //         cout<< " ";
    //     }
    //     cout<< "*";

    //     if (i != 0) {
    //         for (int j = 0; j < 2 * i - 1; j++)
    //         {
    //             cout << " ";
    //         }
    //         cout << "*";
    //     }
    //     cout<<endl;
    // }

    // // for (int i = 0; i < n - 1; i++) {

    // //     for (int j = 0; j < i + 1; j++){
    // //         cout<< " ";
    // //     }

    // //     cout<< "*";

    // //     if (i != n - 2) {
    // //         for (int j = 0; j < 2 * (n-i) - 5; j++)
    // //         {
    // //             cout<<" ";
    // //         }
    // //         cout<<"*";
    // //     }
    // //     cout<<endl;
    // // }

    // for (int i = n - 2; i >= 0; i--){
    //     for (int j = 0; j < n - i - 1; j++){
    //         cout<< " ";
    //     }
    //     cout<< "*";

    //     if (i != 0) {
    //         for (int j = 0; j < 2 * i - 1; j++)
    //         {
    //             cout<< " ";
    //         }
    //         cout<<"*";
    //     }

    //     cout<<endl;
    // }

    // printing H with stars
    /*
     *   *
     *   *
     *****
     *   *
     *   *
     */
    //

    // for (int i = 0; i < 7; i++){
    //     for (int j = 0; j < 7; j++) {

    //         if(j == 0 || j == 7 - 1 || i == 7 / 2){
    //             cout<< "*";
    //         }else{
    //             cout<< " ";
    //         }
    //     }
    //     cout<<endl;
    // }

    // for (int i = 0; i < 7; i++){
    //     for (int j = 0; j < 7; j++) {

    //         if (i == 0 || i == 7 - 1 || j == 7 - i - 1)
    //         {
    //             cout<< "*";
    //         }
    //         else
    //         {
    //             cout<< " ";
    //         }
    //     }
    //     cout<<endl;
    // }
    
    return 0;
}