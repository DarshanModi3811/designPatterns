#include <iostream>
#include "abstract_checkbox.hpp"

#pragma once
using namespace std;

class windowsCheckBox : public abstractCheckBox{
    virtual void click () override {
        cout <<"windows checkbox clicked" << endl;
    }
    ~windowsCheckBox(){
        cout << "windows checkbox destructor called" << endl;
    }
};