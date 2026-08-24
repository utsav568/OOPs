#include <iostream>
using namespace std;
class Text{
    private:
    int a;
    public:
    void geta(int);
};
class Example{
    int b;
    public: 
    void getb(int);
};
void Text::geta(int b){
    a=b;
}
void Example::getb(int c){
    b=c;
}
void Sum(Text a , Example b){
    

}
int main(){
    Text t;
    t.geta(10);
    Example E;
    E.getb(20);
    Sum(10,20);
}