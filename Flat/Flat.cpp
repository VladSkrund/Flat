#include <iostream>
using namespace std;

class Housing {
public:
    int square;
    virtual void printData();
};

class House : public Housing {
public:
    int bathrooms;
    int bedrooms; 

    House(int bathrooms, int bedrooms, int square) {
        this->bathrooms = bathrooms;
        this->bedrooms = bedrooms;
        this->square = square;
    }
    
    void printData() {
        cout << "House" << endl;
        cout << "Square: " << this->square << endl;
        cout << "Amount of bathrooms: " << this->bathrooms << endl;
        cout << "Amount of bedrooms: " << this->bedrooms << endl;
    }
};

class Flat : public Housing {
public:
    int bathrooms;
    int bedrooms;
    int floor;

    Flat(int bathrooms, int bedrooms, int floor, int square) {
        this->bathrooms = bathrooms;
        this->bedrooms = bedrooms;
        this->floor = floor;
        this->square = square;
    }

    void printData() {
        cout << "Flat" << endl;
        cout << "Square: " << this->square << endl;
        cout << "Amount of bathrooms: " << this->bathrooms << endl;
        cout << "Amount of bedrooms: " << this->bedrooms << endl;
        cout << "Floor: " << this->floor;
    }
};

class Room : public Housing {
public:
    string wallpaperColor;

    Room(string wallpaperColor, int square) {
        this->wallpaperColor = wallpaperColor;
        this->square = square;
    }
    void printData() {
        cout << "Room" << endl;
        cout << "Square: " << this->square << endl;
        cout << "Wallpaper color: " << this->wallpaperColor << endl;
    }
};

int main()
{
    Housing** housings = new Housing*[3];
    House* h = new House(2, 4, 120);
    housings[0] = h;
    Flat* f = new Flat(2, 3, 7, 56);
    housings[1] = f;
    Room* r = new Room("green", 20);
    housings[2] = r;
    for (int i = 0; i < 3; i++) {
        housings[i]->printData();
    }
}

