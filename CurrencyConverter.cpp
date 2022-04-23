
// Author --> LONE.Guy (Ibrohim Abdivokhidov)
// Ex-Student of INHA University, Currently Student of New Uzbekistan University
// Rich me --> Instagram: @loneguy | Github: @abdibrokhim
// !ALL RIGHTS RESERVED!

// Task --> Currency Converter

#include <iostream>

using namespace std;

int main()
{
    int num;
    float sum, _to_;
    
    cout << "       *-------------------------------------------------------------------------------*" << endl;
    cout << "       |                                                                               |" << endl;
    cout << "       |                    Choose one of the options to continue                      |" << endl;
    cout << "       |                                                                               |" << endl;
    cout << "       *-------------------------------------------------------------------------------*" << endl;
    
    cout << "         [0] --> Convert from USD to UZS" << "      |      ";
    
    cout << "[2] --> Convert from EURO to UZS\n";
    cout << "         [1] --> Convert from UZS to USD" << "      |      ";
    cout << "[3] --> Convert from UZS to EURO\n";
    
    cin >> num;
    
    
    if (num == 0){
        cout << "Enter the sum: ";
        cin >> sum;
        
        if (sum > 0){
            _to_ = sum * 10705.00;
            cout << sum << " USD equals " << _to_ << " UZS " << endl;
        }
        
        else{
            cout << "Please, enter valid sum!" << "  ";
            cout << "( sum > 0 )";
        }
    }
    
    if (num == 1){
        cout << "Enter the sum: ";
        cin >> sum;
        
        if (sum > 0){
            _to_ = sum / 10705.00;
            cout << sum << " UZS equals " << _to_ << " USD " << endl;
        }
        
        else{
            cout << "Please, enter valid sum!" << "  ";
            cout << "( sum > 0 )";
        }
        
    }
    
    if (num == 2){
        cout << "Enter the sum: ";
        cin >> sum;
        
        if (sum > 0){
            _to_ = sum * 12432.25;
            cout << sum << " EURO equals " << _to_ << " UZS " << endl;
        }
        
        else{
            cout << "Please, enter valid sum!" << "  ";
            cout << "( sum > 0 )";
        }
        
    }
    
    if (num == 3){
        cout << "Enter the sum: ";
        cin >> sum;
        
        if (sum > 0){
            _to_ = sum / 12432.25;
            cout << sum << " UZS equals " << _to_ << " EURO " << endl;
        }
        
        else{
            cout << "Please, enter valid sum!" << "  ";
            cout << "( sum > 0 )";
        }
        
    }
    
    if (num != 0 && num != 1 && num != 2 && num != 3) {
        cout << "Please, choose one of the options and try again!";
    }
    
    return 0;
}


