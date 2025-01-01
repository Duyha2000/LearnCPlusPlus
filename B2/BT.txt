#include <iostream>

using namespace std;

// Bài toán tính tổng: sum = 0 -> sum += i (arr[i])
// Bài toán tính tích: tich = 1 -> tich *= i (arr[i])
// Bài toán đếm số: count = 0 -> Khi thỏa mãn điều kiện(if else) count++
// Bài tóan vị trí: position = -1 -> Khi thỏa mãn điều kiện (if else) pos = i
int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int x;
    cin >> x; // 8
    // 3 5
    // postion ( i j)
    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (arr1[i] + arr1[j] == x) {
                cout << arr1[i] << "" << arr1[j] << "";
            }
        }

    }
    // sap xep mang tang dan
    // Input Example 1: nums = [2, 7, 11, 15], target = 9
    // Output Example 1: 2,7
    // 2 số trong array + lại = target:

    // ĐỐi với những bài tập lấy 2 số trong array: dùng 2 vòng for

    return 0;
}
