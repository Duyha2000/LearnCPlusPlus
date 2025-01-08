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


double findAvg(int array[], int size) {
    double sum = 0;
    for (int i = 0; i < size; i++) {
        sum = sum + array[i];
    }
    return sum / size;
}

int findMin(int array[], int size) {
    int minNumber = array[0];
    // 1 8 5 7 9
    // maxNumber = arr[0] = 1
    //         ->
    // Cầm giá trị maxNumber so sánh array[i] -> nếu array[i] > maxNumber -> maxNumber là array[i]
    for (int i = 0; i < size; i++) {
        if (array[i] < minNumber) {
            minNumber = array[i];
        }

    }
    return minNumber;
}

//void displayArray(int array[], int size) {
//for (int i = 0; i < size; i++)
//cout << array[i];}


int main() {
    int size;
    cin >> size;
    int array[size];
    for (int i = 0; i < size; i++) {
        int a;
        cin >> a;
        array[i] = a;
    }
    cout << findAvg(array, size);
    return 0;
}









