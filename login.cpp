#include <bits/stdc++.h>
using namespace std;
int main()
{
    string username;
    string password;
    cin >> username >> password;
    if(is_login_ok(username,password))cout << "登陆成功！" << endl;
    else cout << "登录失败" << endl;
}
