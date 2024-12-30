#include <iostream>
#include <memory>
#include "abstract_button.hpp"

using namespace std;

class windowsButton : public AbstractButton {
    public:
        virtual void click() override {
            cout << "Windows button clicked" << endl;
        }

        ~windowsButton() {
            cout << "Windows button destructor called" << endl;
        }
};