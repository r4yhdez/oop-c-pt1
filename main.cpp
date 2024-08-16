#include <iostream>
#include <string>
using namespace std;

class cetak {
    public:
  void print();
};

 void cetak::print() {
     cout<<"hello world";
 }
int main() {
    cetak laptop;
    
    laptop.print();
    
    return 0;
}
