#include <iostream>
#include "Time.h"
using namespace std;

int main() {
    system("chcp 1251");
	Time t1(1, 05, 15);
	Time t2(10, 04, 55);
    cout << "����� t1 ";
    t1.display();

    cout << "����� t2 ";
    t2.display();
        
    Time t3 = t1.plus(t2);
      
    cout << "����� t1 � t2 ";
    t3.display();

    return 0;
}