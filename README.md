#  Bird Manager Project

This C++ project models various bird species using object-oriented programming principles. It showcases inheritance, polymorphism, abstract classes, and memory management to simulate different birds' attributes, sounds, and behaviors.


## Features

- **Abstract Base Class**: `Bird` defines common properties and methods.
- **Derived Classes**:
  - `Parrot`
  - `Eagle`
  - `Penguin`
  - `Owl`
  - `Swan`
- **Virtual Functions**:
  - `sound()` and `behavior()` are overridden for each bird.
- **BirdManager Class**:
  - Manages a dynamic list of birds.
  - Handles memory cleanup in the destructor.
- **Test Functions**:
  - Add birds
  - Display bird data
  - Verify bird attributes, sounds, and behaviors

##  How to Run

1. **Clone the repository**:
   ```bash
   git clone https://github.com/yourusername/birds.git
   cd birds
Compile the program:
```bash
g++ -o birds main.cpp
```

Run the program:
```bash
./birds
```

