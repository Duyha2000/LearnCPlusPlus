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
    string word;
    getline(cin, word);
    int countNumber = 0;
    int countChar = 0;
    for (int i = 0; i < word.size(); i++) {
        if (word[i] >= '0' && word[i] <= '9') {
            countNumber++;
        }
        if ((word[i] >= 'a' && word[i] <= 'z') || (word[i] >= 'A' && word[i] <= 'Z'))
            countChar++;
    }
    cout << "So ky tu dac biet la: " << word.size() - countChar - countNumber << endl;
    cout << countNumber << endl;
    cout << countChar << endl;
    // "Hello123@"
    // 9 ky tu: 5 chu - 3 số - 1 [đặc biệt ]
    return 0;
}

