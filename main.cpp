#include <iostream>

using namespace std;

// Bài toán tính tổng: sum = 0 -> sum += i (arr[i])
// Bài toán tính tích: tich = 1 -> tich *= i (arr[i])
// Bài toán đếm số: count = 0 -> Khi thỏa mãn điều kiện(if else) count++
// Bài tóan vị trí: position = -1 -> Khi thỏa mãn điều kiện (if else) pos = i
// i : dùng bài toán liên quan vị trí (100%)
// Trong if else so sánh dùng 2 dấu = " == "
// Không in ra sum và count trong vòng lặp

int main() {
// https://github.com/Duyha2000/Cplusplus/tree/main/String
//  https://docs.google.com/document/d/1k49cKlPUSMBBBhk4IoVrQJJhC-CLEed-ZQO-_Mp6s10/edit?usp=sharing
//    string words;
//    // 1: Input string: abcd -> size = 4
//    //                 [0]12[3] <- (size - 1 )
//    //                  dcba
//    //
//    getline(cin, words);
//    // 2: In ra size, cout
//    cout << words.size() << "\t" << words << endl;
//    // 3: Reverse string: dcba
//    for (int i = words.size() - 1; i >= 0; i--) {
//        cout << words[i];
//    }
//    cout << endl;
    // 4: Chữ số:
    /*
    int sum = 0;
    for (int i = 0; i < words.size(); i++) {
        if (words[i] >= '0' && words[i] <= '9') {
            // cout << words[i] << " ";'1' '2' '3' '4'
            sum += (words[i] - '0'); // ép kiểu từ char -> sang int: - '0'
            cout << sum;

        }
    }
    cout << sum; */
    // Tính tổng các chữ số của chuỗi words:

    //  Nhập vào số 123456:
    // Tính tổng các chữ số của nó
    // Nhập 1 số, tính tổng các chữ số
    // Nhập vào 1 số, in ra số đảo ngược:
    string name;
    getline(cin, name);
    int sum = 0;
    for (int i = 0; i < name.size(); i++) {
        if (name[i] >= '0' && name[i] <= '9') {
            sum = sum + (name[i] - '0');
        }
    }
    cout << sum;
    // "dannnnnnn12346"
    // sum = 16

    return 0;
}
