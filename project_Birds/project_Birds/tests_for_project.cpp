#include <iostream>
#include <string>
#include <vector>
#include "Birds.h"

using namespace std;
void testAddBirds(BirdManager& manager) {
    manager.addBird(new Parrot("Polly", 25, "Seeds"));
    manager.addBird(new Eagle("Eddie", 25, "Fish"));
    manager.addBird(new Penguin("Pingu", 25, "Fish"));
    manager.addBird(new Owl("Owly", 25, "Mice"));
    manager.addBird(new Swan("Swanny", 25, "Plants"));
    cout << "All birds added successfully.\n";
}

void testDisplayAllBirds(const BirdManager& manager) {
    manager.displayAllBirds();
}

void testBirdAttributes() {
    Parrot parrot("Polly", 25.0, "Seeds");
    Eagle eagle("Eddie", 200.0, "Fish");
    Penguin penguin("Pingu", 50.0, "Fish");
    Owl owl("Owly", 45.0, "Mice");
    Swan swan("Swanny", 150.0, "Plants");

    cout << "Testing bird attributes..." << endl;
    cout << "Parrot name: " << parrot.getName() << ", expected: Polly" << endl;
    cout << "Eagle wing span: " << eagle.getWingSpan() << " cm, expected: 200.0 cm" << endl;
    cout << "Penguin food: " << penguin.getFood() << ", expected: Fish" << endl;
    cout << "Owl species: " << owl.getSpecies() << ", expected: Owl" << endl;
    cout << "Swan wing span: " << swan.getWingSpan() << " cm, expected: 150.0 cm" << endl;
}
void testBirdSounds() {
    Parrot parrot("Polly", 25.0, "Seeds");
    Eagle eagle("Eddie", 200.0, "Fish");
    Penguin penguin("Pingu", 50.0, "Fish");
    Owl owl("Owly", 45.0, "Mice");
    Swan swan("Swanny", 150.0, "Plants");

    cout << "Testing bird sounds..." << endl;
    cout << "Parrot: ";
    parrot.sound();
    cout << "Eagle: ";
    eagle.sound();
    cout << "Penguin: ";
    penguin.sound();
    cout << "Owl: ";
    owl.sound();
    cout << "Swan: ";
    swan.sound();
}

void testBirdBehaviors() {
    Parrot parrot("Polly", 25.0, "Seeds");
    Eagle eagle("Eddie", 200.0, "Fish");
    Penguin penguin("Pingu", 50.0, "Fish");
    Owl owl("Owly", 45.0, "Mice");
    Swan swan("Swanny", 150.0, "Plants");

    cout << "Testing bird behaviors..." << endl;
    cout << "Parrot: ";
    parrot.behavior();
    cout << "Eagle: ";
    eagle.behavior();
    cout << "Penguin: ";
    penguin.behavior();
    cout << "Owl: ";
    owl.behavior();
    cout << "Swan: ";
    swan.behavior();
}
int main()
{
    BirdManager manager;
    testAddBirds(manager);
    testDisplayAllBirds(manager);
    testBirdAttributes();
    testBirdSounds();
    testBirdBehaviors();
}