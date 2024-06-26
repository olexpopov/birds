#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Bird {
protected:
    string name;
    string species;
    double wingSpan;
    string food;
public:
    Bird(string n, string s, double w, string f) : name(n), species(s), wingSpan(w), food(f) {}

    virtual void displayInfo() const {
        cout << "Name: " << name << endl;
        cout << "Species: " << species << endl;
        cout << "Wing Span: " << wingSpan << " cm" << endl;
        cout << "Food: " << food << endl;


    }
    virtual void sound() const = 0;
    virtual ~Bird()
    {

    }
    virtual void behavior() const = 0;


    string getName() const { return name; }
    string getSpecies() const { return species; }
    double getWingSpan() const { return wingSpan; }
    string getFood() const { return food; }

};


