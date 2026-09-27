// COMSC-210- | LAB 14 | Ahmad Dharhan

#include <iostream>
using namespace std;

class Color{
private:
    int RED;
    int GREEN;
    int BLUE;

public:
    void setRED(int a)                      {RED = a;}
    void setGREEN(int a)                    {GREEN = a;}
    void setBLUE(int a)                     {BLUE = a;}

    int getRED()                           {return RED;}
    int getGREEN()                         {return GREEN;}
    int getBLUE()                          {return BLUE;}

    void printdata(){
        cout << " RED Color Value: " << RED << endl;
        cout << " GREEN Color Value: " << GREEN << endl;
        cout << " BLUE Color Value: " << BLUE << endl;
    }
}

int main(){


    return 0;
}