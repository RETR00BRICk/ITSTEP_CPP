#include <iostream>
int nextId = 0;

struct Date{
	int day, month, year;
};
struct User {
	int id;
	char fullname[50];
	char email[100];
	char username[50];
	Date birthday;
	Date registrationDate;
};

void inputUser(User& user){
	user.id = nextId;
	nextId++;
	std::cout << "Enter user full name: ";
	std::cin.getline(user.fullname, 50);
	std::cout << "Enter user email: ";
	std::cin.getline(user.email, 100);
	std::cout << "Enter username: ";
	std::cin.getline(user.username, 50);
	std::cout << "Enter birth daye: ";
	std::cin >> user.birthday.day >> user.birthday.month >> user.birthday.year;
}
void printUser(const User& user){
	std::cout << "ID: " << user.id << '\n';
	std::cout << "Full name: " << user.fullname << '\n';
	std::cout << "Email: " << user.email << '\n';
	std::cout << "Username: " << user.username << '\n';
	std::cout << "Birthdate: " << user.birthday.day << ',' << user.birthday.month << ',' << user.birthday.year << '\n';
}

/*struct Test{
	char* str;
	
	double d;
	int i;
	short s;
	char c;
	
	
};*/

struct Rights{
	bool write : 1;
	bool read : 1;
	
};

union Union{
	int i;
	char c;
};

int main(){
	
	User* users = new User[5];
	//Rights r = {0, 1};
	//std::cout << r.read << '\n' << r.write << '\n';
	Union u = { 0 };
	u.c = 'u';
	std::cout << u.i << ' ' << u.c << '\n';
	u.i = 118;
	std::cout << u.i << ' ' << u.c << '\n';
	std::cout << sizeof(Union) << '\n';
	User user = {nextId, "vova", "email", "vovas1k", {10, 12, 2009}, {10, 31, 2026}};
	
	User userCopy = user;
	inputUser(user);
	printUser(user);
}

//BAD:
/*nt nextId = 0;

void inputUser(int& id, char* fullname, char* email, char* username, int& day, int& month, int& year){
	id = nextId;
	nextId++;
	std::cout << "Enter user full name: ";
	std::cin.getline(fullname, 50);
	std::cout << "Enter user email: ";
	std::cin.getline(email, 100);
	std::cout << "Enter username: ";
	std::cin.getline(username, 50);
	std::cout << "Enter birth daye: ";
	std::cin >> day >> month >> year;
}

void printUser(int id, char* fullname, char* email, char* username, int day, int month, int year){
	std::cout << "ID: " << id << '\n';
	std::cout << "Full name: " << fullname << '\n';
	std::cout << "Email: " << email << '\n';
	std::cout << "Username: " << username << '\n';
	std::cout << "Birthdate: " << day << ',' << month << ',' << year << '\n';
	
}

int main(){
	int id;
	char fullName[50];
	char email[100];
	char username[50];
	int day, month, year;
	inputUser(id, fullName, email, username, day, month, year);
	printUser(id, fullName, email, username, day, month, year);
}
*/

//CLASSWORK COPIED:
/*
#include <iostream>

int nextId = 0;

enum Type {
    Parrot, Cat, Dog
};

struct Date {
    int day, month, year;
};

struct User {
    int id;
    char fullName[50];
    char email[100];
    char username[50];
    Date birthDate;
    Date registrationDate;
};

void inputUser(User& user) {
    user.id = nextId;
    nextId++;
    std::cout << "Enter user full name: ";
    std::cin.getline(user.fullName, 50);
    std::cout << "Enter user email: ";
    std::cin.getline(user.email, 100);
    std::cout << "Enter username: ";
    std::cin.getline(user.username, 50);
    std::cout << "Enter birth date: ";
    std::cin >> user.birthDate.day >> user.birthDate.month >> user.birthDate.year;
}

void printUser(const User& user) {
    std::cout << "Id: " << user.id << '\n';
    std::cout << "Full name: " << user.fullName << '\n';
    std::cout << "E-mail: " << user.email << '\n';
    std::cout << "Username: " << user.username << '\n';
    std::cout << "Birthdate: " << user.birthDate.day << '.' << user.birthDate.month << '.' << user.birthDate.year << '\n';
}

//struct Test { // 9 byte
//    char* str; // 8 byte
//    short s; // 2 byte
//    double d; // 8 byte
//    int i; // 4 byte
//    char c; // 1 byte
//};

//struct Rights { // 1 byte
//    bool write : 1; // 1 bit
//    bool read : 1; // 1 bit
//};

union Union {
    int i;
    char c;
    short s;
};

int main()
{
    //User* user = new User;

    //(*user).fullName
    //user->registrationDate

    User* users = new User[5];

    //for (User* ptr = users; ;ptr++) {
    //    ptr->birthDate;
    //}

    //users[10]->registrationDate

    delete[]users;

    //std::cout << sizeof(Union) << '\n';

    //Union u = { 0 };

    //u.c = 'u';

    //std::cout << u.i << ' ' << u.c << '\n';

    //u.i = 258;

    //std::cout << u.i << ' ' << u.c << '\n';

    //u.c = '6';

    //std::cout << u.i << ' ' << u.c << '\n';

    //std::cout << sizeof(long double) << '\n';

    //Rights r = { 0, 1 };
    //std::cout << r.read << '\n';
    //std::cout << r.write << '\n';

    //std::cout << sizeof(Rights) << '\n';

    //std::cout << sizeof(Test) << '\n';

    //User user = { nextId, "vova", "email@gmail.com", "vova202202", {10, 10, 2000}, {10, 31, 2026} };

    //User userCopy = user;

    //inputUser(user);
    //printUser(user);

    // input, print
}
*/
