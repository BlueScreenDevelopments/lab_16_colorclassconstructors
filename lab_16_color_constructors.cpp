#include <iostream>
#include <vector>
using namespace std;

/*
Brandon Julao
COMSC-210-5470
10.02.25
Color Class Constructors
*/

class Color {
private:
    int red;
    int green;
    int blue;

public:
    //default constr
    Color() : red(0), green(0), blue (0) {}

    //parameters constr
    Color(int r, int g, int b) : red(r), green(g), blue(b){}

    //setters
    void setRed(int r) {red = r; }
    void setGreen(int g) {green =g; }
    void setBlue(int b) {blue =b; }

    //getters
    int getRed() const {return red; }
    int getGreen() const {return green; }
    int getBlue() const {return blue; }

    void print() const {
        cout << "RGB (" << red << ", " << green << ", " << blue << ")\n";
    }
};

int main() {
    Color black;                //default
    Color white(255,255,255);   //parameter --white
    Color red(255,0,0);         //parameter --red
    Color green(0,255,0);       //parameter --green
    Color blue (0,0,255);       //parameter --blue

    //store
    vector<Color> colors = {black, white, red ,green, blue};
 
    //printout
    for (const auto& c : colors){
        c.print();
    }

    return 0;
}