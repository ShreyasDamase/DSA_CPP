#include<iostream>

#include<string>

using namespace std;

class Sport {
  string SportName = "";
  double fees = 0;
  public:
    Sport() {}
  Sport(string SportName, double fees) {
    this -> SportName = SportName;
    this -> fees = fees;
  }

  void addSport() {

    enum SportList {
      exit,
      cricket,
      football,
      kabbadi
    };

    bool condition = true;
    while (condition) {
      cout << "\n exit,cricket,football,kabbadi";
      int choice;
      cout << "\n choice:";
      cin >> choice;

      switch (choice) {
      case exit:
        condition = false;
        break;

      case cricket:
        if (SportName.find("cricket") == string::npos) { //addedSports.find(sportName) != string::npos
          SportName.append("cricket");
          fees += 1250;
        } else cout << "its allready there";
        cout << SportName << fees;

        break;
      case football:
        if (SportName.find("football") == string::npos) { //addedSports.find(sportName) != string::npos
          SportName.append("football");
          fees += 1000;
        } else cout << "its allready there";
        cout << SportName << fees;

        break;
      case kabbadi:
        if (SportName.find("kabbadi") == string::npos) { //addedSports.find(sportName) != string::npos
          SportName.append("kabbadi");
          fees += 1100;
        } else cout << "its allready there";

        break;

      }
    }
  }

  void display() {
    cout << "Sport:" << SportName;
    cout << "fees:" << fees;
  }

};
/******************************************************************/
class Person {
  protected: string name;
  int age;
  public: Person() {}
  Person(string name, int age): name(name),
  age(age) {}
  void display() {
    cout << "name " << name;
    cout << "age " << age;
  }
};
/****************************************************************/
class Player: public Person, public Sport {
  int id;
  long int mobile;
  static
  const int MAX_PLAYERS = 10;
  static int numberPlayer;
  Player * players[MAX_PLAYERS]; // Array of Player pointers
  public:
    Player(): id(0), mobile(0) {}
  Player(int id, long int mobile): id(id), mobile(mobile) {}

  void addPlayer() {
    if (numberPlayer < MAX_PLAYERS) {
      cout << "name: ";
      cin >> name;
      cout << "age: ";
      cin >> age;
      cout << "id: ";
      cin >> id;
      cout << "mobile: ";
      cin >> mobile;

      players[numberPlayer++] = new Player(name, age, id, mobile);
      cout << "Player is added" << endl;
    } else {
      cout << "Maximum number of players reached." << endl;
    }
  }

  Player(string name, int age, int id, int mobile): Person(name, age), id(id), mobile(mobile) {}
  void addPlayersport() {
    int index = numberPlayer - 1;

    players[index] -> addSport();

  }
  void showPlayer() {
    int index = numberPlayer - 1;

    players[index] -> display();

  }
  void showAllPlayer() {
    for (int i = 0; i < numberPlayer; i++) {
      players[i] -> display();
    }
  }
  void Enrolled() {
    char status;
    cout << "Enter fees status: p -paid n-not paid";
    cin >> status;
    if (status == 'p') {
      cout << "enrolled student";
    } else if (status == 'n') {
      int index = numberPlayer - 1;

      cout << "denrolled student";
      delete players[index];
      players[index] = NULL;

    }

  }

  void display() {
    Person::display();
    cout << "id:" << id;
    cout << "mobile" << mobile;
    Sport::display();
  }

};

int Player::numberPlayer = 0;

int main() {
  Player player;

  while (true) {
    cout << "0. Exit  1. New Player  2. Add Sport  3. Enroll Player  4. Show Player Info  5. Show All Players" << endl;

    int choice;
    cin >> choice;
    switch (choice) {
    case 0:
      return 0;
    case 1:
      player.addPlayer();
      break;
    case 2:
      player.addPlayersport();
      break;
    case 3:
      player.Enrolled(); // player.enroll()// Enroll Player
      break;
    case 4:
      player.showPlayer(); // Show Player Info
      break;
    case 5:
      player.showAllPlayer(); // Show All Players
      break;
    }
  }

  return 0;
}