
#include <iostream>
using namespace std; 

class Box {
    int length;

public:
   
    Box(int l) {
        length = l;
    }

   
    bool isEqualTo(Box length2) {
        return length == length2.length; 
    }
};

int main() {
    Box box1(10);
    Box box2(10);

    
    if (box1.isEqualTo(box2)) {
        cout << "Both box has same length " << endl;
    } else {
        cout << "Both box have different lengths" << endl;
    }

    return 0;
}

