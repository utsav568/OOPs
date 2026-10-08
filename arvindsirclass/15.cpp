#include <iostream>
using namespace std;

class Text{
    private:
    int a;

    public:
    void get(int);
    int show();
};

class Example{
    private:
    int b;

    public: 
    void get(int);
    int show();
};

void Text::get(int b){
    a=b;
}

int Text::show(){
    return a;
}

void Example::get(int c){
    b=c;
}

int Example::show(){
    return b;
}

void Sum(Text a, Example b){
    cout << "Sum = " << a.show() + b.show();
}

int main(){
    Text t;
    t.get(10);

    Example E;
    E.get(20);

    Sum(t,E);

   
}