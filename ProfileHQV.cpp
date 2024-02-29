#include <iostream>
#include <string>
using namespace std;
class Profile {
private:
    string name;
    int age;
    string studentID;

public:
    Profile(const string& n, int a, const string& sID)
        : name(n), age(a), studentID(sID) {}

    void displayProfile() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "StudentID: " << studentID << endl;
    }
};

int main() {
	
    Profile myProfile("HoangQuocViet", 20, "B21DCVT460");
    myProfile.displayProfile();

    return 0;
}

