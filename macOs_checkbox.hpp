#include <iostream>
#include "abstract_checkbox.hpp"

using namespace std;

class macOsCheckBox : public abstarctCheckBox{
    public:
    virtual void click () override {
        cout <<"macOs checkbox clicked" << endl;
    }

    ~macOsCheckBox(){
        cout << "macOs checkbox destructor called" << endl;
    }
};