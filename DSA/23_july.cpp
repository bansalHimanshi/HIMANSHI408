// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     string password;
//     cout << "Enter password: ";
//    // getline(cin, password);
// cin>>password;
//     int length = password.length();
//     int upper = 0, lower = 0, digit = 0, special = 0;

//     int i = 0;
//     // use while loop to analyze each character
//     while (i < length) {
//         char ch = password[i];
//         if (ch >= 'A' && ch <= 'Z') {
//             upper++;
//         } else if (ch >= 'a' && ch <= 'z') {
//             lower++;
//         } else if (ch >= '0' && ch <= '9') {
//             digit++;
//         } else {
//             special++;
//         }
//         i++;
//     }

//     // count how many categories are present
//     int categories = 0;
//     if (upper > 0) categories++;
//     if (lower > 0) categories++;
//     if (digit > 0) categories++;
//     if (special > 0) categories++;

//     // determine strength using nested if
//     string strength;
//     if (length < 6 || categories <= 2) {
//         strength = "Weak";
//     } else {
//         if (length >= 6 && length <= 8) {
//             if (categories >= 3) {
//                 strength = "Medium";
//             } else {
//                 strength = "Weak";
//             }
//         } else if (length >= 9) {
//             if (categories == 4) {
//                 strength = "Strong";
//             } else if (categories >= 3) {
//                 strength = "Medium";
//             } else {
//                 strength = "Weak";
//             }
//         }
//     }

//     // display detailed analysis
//     cout << "\n--- Password Analysis ---\n";
//     cout << "Length: " << length << endl;
//     cout << "Uppercase letters: " << upper << endl;
//     cout << "Lowercase letters: " << lower << endl;
//     cout << "Digits: " << digit << endl;
//     cout << "Special characters: " << special << endl;
//     cout << "Password strength: " << strength << endl;

//     return 0;
// }


#include<iostream>
using namespace std;
int main()
{int n;
    char items={'chips','soda','candy'};
    int price[4];
    cin>>n;
}


