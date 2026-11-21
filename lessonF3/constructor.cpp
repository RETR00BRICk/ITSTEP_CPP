#include <iostream>
#include <cstring>

class Dog {
private:
    char* name;
    int age;
public:
    //Dog() {    } // конструктор за замовчуванням
    Dog() {
        name = nullptr;
        age = 0;
    }
    explicit Dog(int initAge) {
        age = initAge >= 0 ? initAge : 0;
        name = nullptr;
    }
    explicit Dog(const char* initName) {
        age = 0;
        if (initName != nullptr) {
            name = new char[strlen(initName) + 1];
            strcpy(name, initName);
        }
        else {
            name = nullptr;
        }
    }
    Dog(const char* initName, int initAge) {
        age = initAge >= 0 ? initAge : 0;

        if (initName != nullptr) {
            name = new char[strlen(initName) + 1];
            strcpy(name, initName);
        }
        else {
            name = nullptr;
        }
    }

    ~Dog() {
        std::cout << "[LOG] Dog destructor " << name << '\n';
        if (name != nullptr) delete[] name;
    }

    void printDogInfo() {
        std::cout << "Name: " << (name == nullptr ? "Unknown dog" : name)
            << '\n' << "Age: " << age << '\n';
    }

    void setName(const char* newName) {
        if (name != nullptr) delete[] name;

        if (newName != nullptr) {
            name = new char[strlen(newName) + 1];
            strcpy(name, newName);
        }
        else {
            name = nullptr;
        }
    }
    void setAge(int newAge) {
        if (newAge > age) {
            age = newAge;
        }
    }

    const char* getName() {
        return name;
    }
};

void feedDog(Dog& dog) {
    std::cout << "Feeding dog " << dog.getName() << '\n';
}

int main()
{
    Dog bobik("Bobik", 4);

    Dog* dogPtr = new Dog("Rex", 6);

    delete dogPtr;

    //bobik.setName("Rex");

    //feedDog(bobik);

    //feedDog(10);
    //feedDog("bone");

    //Dog zhorik("Zhorik", 5);
    //Dog rex("Rex", 12);

    bobik.printDogInfo();
    //zhorik.printDogInfo();
    //rex.printDogInfo();
}
