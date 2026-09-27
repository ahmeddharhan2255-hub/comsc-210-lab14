// COMSC-210- | LAB 14 | Ahmad Dharhan

#include <iostream>
using namespace std;

//Class Color
class Color{
private:
    //Private class definitions
    int RED;
    int GREEN;
    int BLUE;

public:
    //Setters
    void setRED(int a)                      {RED = a;}
    void setGREEN(int a)                    {GREEN = a;}
    void setBLUE(int a)                     {BLUE = a;}

    //Getters
    int getRED()                           {return RED;}
    int getGREEN()                         {return GREEN;}
    int getBLUE()                          {return BLUE;}

    //Data display;
    void print(){
        cout << "COLOR RGB VALUES" << endl;
        cout << "*****************" << endl;
        cout << " RED Color Value: " << RED << endl;
        cout << " GREEN Color Value: " << GREEN << endl;
        cout << " BLUE Color Value: " << BLUE << endl;
        cout << endl;
        cout << endl;
    }
};

int main(){
    Color color1;
    color1.setRED(2);
    color1.setGREEN(3);
    color1.setBLUE(4);   
    color1.print();

    Color color2;
    color1.setRED(2);
    color1.setGREEN(3);
    color1.setBLUE(4);
    color1.print();

    Color color3;
    color1.setRED(2);
    color1.setGREEN(3);
    color1.setBLUE(4);
    color1.print();

    Color color4;
    color1.setRED(2);
    color1.setGREEN(3);
    color1.setBLUE(4);
    color1.print();

    return 0;
}