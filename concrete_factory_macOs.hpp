#include <iostream>
#include <memory>
#include "abstract_factory.hpp"
#include "macOs_button.hpp"
#include "macOs_checkbox.hpp"

#pragma once
using namespace std;

class concreteFactoryMacOs : public AbstractFactory{
    public:
        virtual unique_ptr<AbstractButton> createButton() override {
            return make_unique<macOsButton>();
        }

        virtual unique_ptr<abstractCheckBox> createCheckbox() override {
            return make_unique<macOsCheckBox>();
        }

};
