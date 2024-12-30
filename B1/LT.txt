#include <iostream>

using namespace std;

int main() {
    // Nhập tên đăng nhập và mật khẩu, tên đăng nhập và mật khẩu phải lớn hơn 8 ký tự, nếu sai bắt nhập lại:
    //    // Nếu nhập sai 5 lần sẽ in ra bạn bị khóa tài khoản.
    string username;
    string password;
    int count = 0;
    do {
        cin >> username;
        cin >> password;
        if (username.size() < 8 && password.size() < 8) {
            cout << username << endl << password << endl << " nhap lai";
            count++;
        }

        if (count > 5) {
            cout << "ban bi khoa tai khoan";
        }

    } while (username.size() < 8 && password.size() < 8);
    cout << username << endl << password;

    return 0;
}
