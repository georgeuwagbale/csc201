//
// Created by uwagbalegeorge on 05/02/2022.
//

#include "result_management_system.cpp"
#include "authentification.cpp"
#include "menu.cpp"

int main() {
    char user_name[20], user_password[10];
    cout << "User name: "; cin >> user_name;
    cout << "Password: "; cin >> user_password;

    if (is_authorised(user_name, user_password)){
        Staff authorized_user;
        authorized_user.set_user_name(user_name);
        authorized_user.set_password(user_password);
        cout << "Welcome " << authorized_user.get_user_name() << "\n" << endl;
        while (true) {
            char enter;
            menu(authorized_user);
            cout << "Enter any key: "; cin >> enter;
        }
    }
    return 0;
}
