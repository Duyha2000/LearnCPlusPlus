#include <iostream>

using namespace std;

// Bài toán tính tổng: sum = 0 -> sum += i (arr[i])
// Bài toán tính tích: tich = 1 -> tich *= i (arr[i])
// Bài toán đếm số: count = 0 -> Khi thỏa mãn điều kiện(if else) count++
// Bài tóan vị trí: position = -1 -> Khi thỏa mãn điều kiện (if else) pos = i
// i : dùng bài toán liên quan vị trí (100%)
// Trong if else so sánh dùngareaCircle(double r) 2 dấu = " == "
// Không in ra sum và count trong vòng lặp

// https://docs.google.com/document/d/130YMvQO2tqBXioqX3mvP7hk9l58QUsWZmrhXUXrG_h4/edit?tab=t.0#heading=h.b945vx857czl
void perNumber(int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (n % i == 0) {
            sum = sum + i;
        }
    }
    if (sum == n) {
        cout << n << " la so hoan hao";
    } else {
        cout << n << " ko la so hoan hao";
    }
}


int main() {
    // Exercise 10: Check Perfect Number
    // Input: 28: các ước là 1 2 4 7 14
    // Tổng các ưoc sô = số input  (PerfectNumber)
    // Output: PerfectNumber

    // Input: 10: các ước là 1 2 5
    // Tổng các ước số = 8 != 10 ( k phải perfect number)
    int n;
    cin >> n;
    perNumber(n);
    return 0;
}









