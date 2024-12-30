#include <iostream>
#include <memory>
#include "abstract_factory.hpp"
#include "concrete_factory_windows.hpp"
#include "concrete_factory_macOS.hpp"
#include "abstract_button.hpp"
#include "abstract_checkbox.hpp"

using namespace std;

int main()
{
    // created windows factroy
    unique_ptr<AbstractFactory> windowsFactory = make_unique<concreateFactoryWindows>();
    // created macOs factory
    unique_ptr<AbstractFactory> macOsFactory = make_unique<concreteFactoryMacOs>();

    // created windows button
    unique_ptr<AbstractButton> windowsButton = windowsFactory->createButton();
    // created windows checkbox
    unique_ptr<abstractCheckBox> windowsCheckBox = windowsFactory->createCheckbox();

    // created macOs button
    unique_ptr<AbstractButton> macOsButton = macOsFactory->createButton();
    // created macOs checkbox
    unique_ptr<abstractCheckBox> macOsCheckBox = macOsFactory->createCheckbox();

    // clicked windows button
    windowsButton->click();
    windowsCheckBox->click();
    macOsButton->click();
    macOsCheckBox->click();

    return 0;
    }