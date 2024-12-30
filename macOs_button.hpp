#include <iostream>
#include "abstract_button.hpp"

#pragma once
using namespace std;

class macOsButton :public AbstractButton {
    public:
        virtual void click() override {
            cout << "MacOs button clicked" << endl;
        }

        ~macOsButton() {
            cout << "MacOs button destructor called" << endl;
        }
};