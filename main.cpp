#include <iostream>
#include <string>

using namespace std;

// Bài toán tính tổng: sum = 0 -> sum += i (arr[i])
// Bài toán tính tích: tich = 1 -> tich *= i (arr[i])
// Bài toán đếm số: count = 0 -> Khi thỏa mãn điều kiện(if else) count++
// Bài tóan vị trí: position = -1 -> Khi thỏa mãn điều kiện (if else) pos = i
// i : dùng bài toán liên quan vị trí (100%)
// Trong if else so sánh dùngareaCircle(double r) 2 dấu = " == "
// Không in ra sum và count trong vòng lặp

// pass by value: int num2
// pass by reference:  &
void refVarFunc(int &num1, int num2) {
    for (int i = 0; i < 5; i++) {
        num1++;
        num2 += 2;
        // cout << num ;  0 1 2 3 4
    }
}

void doSomething(int a, double &b) {
    for (int i = 0; i < a; i++) {
        cout << ".";
        b += 0.01;
    }
    cout << endl;
    a += 5;
    cout << "A variable a is: " << a << endl; // a = 10
}

int main() {
    int a = 5;
    double b = 0.0;
    doSomething(a, b);
    cout << a << " " << b << endl; // a = 5 - b = 0.05
    //
    int x = 10, y = 2;

    refVarFunc(x, y);
    cout << x << endl << y;
    // x = 15
    // y = 2 -> ko thay đổi giá trị
    return 0;
}









