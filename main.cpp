#include <iostream>
#include <cmath>
const double PI = 3.141592653589793;
void drawRose(int rows, double scale, int petals) {
    for (int y = rows; y >= -rows; y--) {
        for (int x = -rows; x <= rows; x++) {
            double r = sqrt(x * x + y * y);
            double theta = atan2(y, x);
            double rose = scale * cos(petals * theta);
            if (fabs(r - rose) < 0.5) { 
                std::cout << "*";
            } else {
                std::cout << " "; 
            } 
        }
        std::cout << std::endl;
    } 
}
int main() { 
    int size = 20;
    double scale = 10.0;
    int petals = 5;
    drawRose(size, scale, petals);
    return 0;
