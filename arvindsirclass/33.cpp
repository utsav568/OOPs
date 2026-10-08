  #include <iostream>
  using namespace std;
  class Example{
    private:
    int a ,b;
    public:
    void setdata(int ,int);
    void display();
    friend void average(Example);


  };
  void Example::setdata(int x,int y){
    a = x;
    b =y;
  }
  void Example::display(){
    cout<<a<<" "<<b<<endl;
  }
  void average(Example E){
    int avg = (E.a+E.b)/2;
    cout<<avg<<endl;
  }
  int main(){
    Example E1;
    E1.setdata(10,20);
    E1.display();
    average(E1);
  }