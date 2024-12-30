#include <iostream>
#include <memory>

using namespace std;

class abstractCheckBox 
{
    public:
        virtual void click() = 0;
        virtual ~abstractCheckBox(){
            cout << "abstract_checkbox destructor called" << endl;
        }
};