#include <iostream>
#include <memory> 
#include "abstract_button.hpp"
#include "abstract_checkbox.hpp"

using namespace std;

class AbstractFactory{
    public:
        virtual unique_ptr<AbstractButton> createButton() = 0;
        virtual unique_ptr<abstractCheckBox> createCheckbox() = 0;

        ~AbstractFactory() {
            cout << "AbstractFactory destructor called" << endl;
        }
};