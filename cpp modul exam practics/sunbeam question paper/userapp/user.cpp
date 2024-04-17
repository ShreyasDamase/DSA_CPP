#include<iostream>
#include<string>

using namespace std;

class User {
private:
    string username, password;
public:
    User() {} // Default constructor

    User(string name, string pass) : username(name), password(pass) {}
    
    string getUsername() {
        return username;
    }
    
    string getPassword() {
        return password;
    }
};

class UserManager {
private:
    static const int MAX_USERS = 100;
    User* users; // Dynamic array of Users
    int numUsers;
    int capacity; // To track the capacity of the array
public:
    UserManager() {
        users = new User[MAX_USERS]; // Allocate memory for the array
        numUsers = 0;
        capacity = MAX_USERS;
    }

    ~UserManager() {
        delete[] users; // Release memory when UserManager object is destroyed
    }

    void RegiserUser() {
        if (numUsers < capacity) {
            string username, password;
            cout << "\t\tEnter User Name : ";
            cin >> username;
            cout << "\t\tEnter Password : ";
            cin >> password;

            users[numUsers] = User(username, password);
            numUsers++;

            cout << "\t\t User Register Successfully ....." << endl;
        }
        else {
            cout << "\t\t Maximum number of users reached. Cannot register new user." << endl;
        }
    }

    bool LoginUser(string name, string pass) {
        for (int i = 0; i < numUsers; i++) {
            if (users[i].getUsername() == name && users[i].getPassword() == pass) {
                cout << "\t\tLogin Successfully...." << endl;
                return true;
            }
        }
        cout << "\t\tInvalid User Name or Password..." << endl;
        return false;
    }

    void showUser() {
        cout << "\t\t---Users List---" << endl;
        for (int i = 0; i < numUsers; i++) {
            cout << "\t\t" << users[i].getUsername() << endl;
        }
    }

    void searchUser(string username) {
        for (int i = 0; i < numUsers; i++) {
            if (users[i].getUsername() == username) {
                cout << "\t\t User Found" << endl;
                return;
            }
        }
        cout << "\t\t User Not Found" << endl;
    }

    void deleteUser(string username) {
        for (int i = 0; i < numUsers; i++) {
            if (users[i].getUsername() == username) {
                for (int j = i; j < numUsers - 1; j++) {
                    users[j] = users[j + 1];
                }
                numUsers--;
                cout << "\t\tUser Remove Successfully...." << endl;
                return;
            }
        }
        cout << "\t\tUser Not Found" << endl;
    }
};

int main() {
    UserManager usermanage;

    int op;
    char choice;
    do {
        system("cls");
        cout << "\n\n\t\t1. Register User " << endl;
        cout << "\t\t2. Login " << endl;
        cout << "\t\t3. Show User List " << endl;
        cout << "\t\t4. Search User " << endl;
        cout << "\t\t5. Delete User" << endl;
        cout << "\t\t6. Exit" << endl;
        cout << "\t\tEnter Your Choice : ";
        cin >> op;
        switch (op) {
        case 1: {
            usermanage.RegiserUser();
            break;
        }
        case 2: {
            string username, password;
            cout << "\t\tEnter User :";
            cin >> username;
            cout << "\t\tEnter Passhsword :";
            cin >> password;
            usermanage.LoginUser(username, password);
            break;
        }
        case 3: {
            usermanage.showUser();
            break;
        }
        case 4: {
            string username;
            cout << "\t\tEnter User Name :";
            cin >> username;
            usermanage.searchUser(username);
            break;
        }
        case 5: {
            string username;
            cout << "\t\tEnter User Name :";
            cin >> username;
            usermanage.deleteUser(username);
            break;
        }
        case 6:
            exit(1);
        }
        cout << "\t\tDo You Want to Continue [Yes/ No] ? :";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    return 0;
}
