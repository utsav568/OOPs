#include <iostream>
using namespace std;

class Circle { 
    private:
    int r;
    
    public:
    void getradius(float);
    float area();
};

void Circle::getradius(int r) {
    this->r = r;
}

float Circle::area() { 
    float P = 3.14 * r * r;
    return (P);
}

int main() {
    Circle C;
    C.getradius(2);
    cout << C.area();
    
   
}