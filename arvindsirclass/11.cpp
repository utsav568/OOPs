#include <iostream>
using namespace std;
namespace verylongnamspace{
    int a =10;
}
namespace vln = verylongnamespace;
int main(){
    cout<<vln::a;
}see wrong