#include <iostream>

using namespace std;

void areaOfSquare();
void areaOfRectangle();
void areaOfTriangle();
int get_int();

int main(){
    bool key = true;
    int selection;

    while(key){
        cout << "Please select the area of the shape to calculate" << endl;
        cout << "1. Square\n";
        cout << "2. Rectangle\n";
        cout << "3. Triangle\n"; 
        cout << "4. Exit" << endl << endl;

        cout << "Enter selection: ";
        selection = get_int();

        
            switch (selection)
            {
            case 1:
                areaOfSquare();
                break;
            case 2:
                areaOfRectangle();
                break;
            case 3:
                areaOfTriangle();
                break;
            case 4:
                key = false;
                break;
    
            default:
             cout << endl << "Your input was: " << selection << " which is an invalid input" << endl;
             cout << "Please enter a valid input!!!" << endl << endl;
                break;
            }
        
        
    }
    


    return 0;
}

void areaOfSquare(){

        int side1, side2;
        cout << "Enter first side: ";
        side1 = get_int();

        cout << "Enter second side: ";
        side2 = get_int();

        int area = side1 * side2;
    cout << "the area of a Square of size " << side1 << " by " << side2 << " is : " << area << endl << endl; 
}

void areaOfRectangle(){

        int base, height;
        cout << "Enter base: ";
        base = get_int();

        cout << "Enter height: ";
        height = get_int();

        int area = base * height;
    cout << "the area of a Rectangle of base " << base << " and height " << height << " is : " << area << endl << endl; 
}

void areaOfTriangle(){
    
        int base, height;
        cout << "Enter base: ";
        base = get_int();

        cout << "Enter height: ";
        height = get_int();

        double area = 0.5 * base * height;
    cout << "the area of a Triangle of base " << base << " and height " << height << " is : " << area << endl << endl; 
}

int get_int()
{
    bool key = true;
    string reader;
    int value;

    while (key){
        try{  // try block to catch any errors
            key = false;

            cin >> reader;    // reads a string from the console and stores the value in the reader variable

            value = stoi(reader);     // stoi() converts a string to an integer then assigns the result to value

        } catch (const invalid_argument& e){  // catching and handling an invalid_argument error generated in the try block
            key = true;
    }
    }

    return value;
}

