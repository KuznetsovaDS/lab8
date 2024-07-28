#include <iostream>
#include "Time.h"
using namespace std;

int main() {
    system("chcp 1251");
	Time t1(1, 05, 15);
	Time t2(10, 04, 55);
    cout << "fist time \n";
    t1.display();

    cout << "second time \n";
    t2.display();
        
    Time t3 = t1.plus(t2);
      
    cout << "Result of summ times ";
    t3.display();

    return 0;
}