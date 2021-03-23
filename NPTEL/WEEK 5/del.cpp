#include <iostream>
using namespace std;
class adder {
public:
void add() { cout << "adder::add() "; }
};
class int_adder : public adder {
public:
int add(int a, int b) { return (a + b); }
};
int main(){
int_adder ia;
ia.add(); ///LINE-1
cout << ia.add(10, 20); //LINE-2
return 0;
}