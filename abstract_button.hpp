#include <iostream>
#include <memory>
using namespace std;

class AbstractButton {
    public:
        virtual void click() = 0;
        virtual ~AbstractButton() {
            cout << "AbstractButton destructor called" << endl;
        }
};