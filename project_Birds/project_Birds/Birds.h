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
class Parrot : public Bird {
public:
    Parrot(string n, double w, string f) : Bird(n, "Parrot", w, f) { }

    void sound() const override {
        cout << "Parrot says: Hello world!" << endl;
    }
    void behavior() const override {
        cout << "Parrot is mimicking human speech" << endl;
    }
};
class Eagle : public Bird {
public:
    Eagle(string n, double w, string f) : Bird(n, "Eagle", w, f) {  }

    void sound() const override {
        cout << "Eagle says: Screech!" << endl;
    }
    void behavior() const override {
        cout << "Eagle is flying high in the sky" << endl;
    }
};
class Penguin : public Bird {
public:
    Penguin(string n, double w, string f) : Bird(n, "Penguin", w, f) {  }

    void sound() const override {
        cout << "Penguin says: Squawk!" << endl;
    }
    void behavior() const override {
        cout << "Penguin is sliding on ice" << endl;
    }
};
class Owl : public Bird {
public:
    Owl(string n, double w, string f) : Bird(n, "Owl", w, f) {  }

    void sound() const override {
        cout << "Owl says: Hoot" << endl;
    }

    void behavior() const override {
        cout << "Owl is hunting at night" << endl;
    }
};
class Swan : public Bird {
public:
    Swan(string n, double w, string f) : Bird(n, "Swan", w, f) {  }

    void sound() const override {
        cout << "Swan says: Hiss" << endl;
    }

    void behavior() const override {
        cout << "Swan is gliding gracefully on the water" << endl;
    }
};



