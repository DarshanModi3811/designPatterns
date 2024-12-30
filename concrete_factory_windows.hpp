#include <iostream>
#include <memory>
#include "abstract_factory.hpp"
#include "windows_button.hpp"
#include "windows_checkbox.hpp"

#pragma once
using namespace std;

class concreateFactoryWindows : public AbstractFactory{
    public:
        virtual unique_ptr<AbstractButton> createButton() override {
            return make_unique<windowsButton>();
        }

        virtual unique_ptr<abstractCheckBox> createCheckbox() override {
            return make_unique<windowsCheckBox>();
        }
};
