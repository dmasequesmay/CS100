#include <iostream>
#include <stdexcept>
#include "../header/rectangle.hpp"
#include "../header/triangle.hpp"

using namespace std;

int main()
{
    int choice = 0;

    while (!((choice == 1) || (choice ==2))) {
        cout << "Enter: " << endl;
        cout << "1. Rectangle" << endl;
        cout << "2. Triangle" << endl;
        cin >> choice;
    }

    if (choice == 1) {
        int height = -1;
        int width = -1;
        while (!(height > 0)) {
            cout << "Enter height: ";
            cin >> height;
            if (!(height > 0)) {
                throw invalid_argument("Invalid input");
            }
        }
        while (width < 0) {
            cout << "Enter width: ";
            cin >> width;
            if (!(width > 0)) {
                throw invalid_argument("Invalid input");
            }
        }
        Rectangle rect;
        rect.set_width(width);
        rect.set_height(height);
        cout << "Rectangle area: " << rect.area() << endl;
    }
    else {
        int height = -1;
        int base = -1;
        while (height < 0) {
            cout << "Enter height: ";
            cin >> height;
            if (!(height > 0)) {
                throw invalid_argument("Invalid input");
            }
        }
        while (base < 0) {
            cout << "Enter base: ";
            cin >> base;
            if (!(base > 0)) {
                throw invalid_argument("Invalid input");
            }
        }
        Triangle tri;
        tri.set_height(height);
        tri.set_base(base);
        cout << "Triangle area: " << tri.area() << endl;
    }

    return 0;
}