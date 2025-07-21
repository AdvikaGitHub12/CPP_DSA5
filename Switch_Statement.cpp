// Name - Advika Bhosle 
// PRN - 24070123007
// Batch - EnTC - A1 

#include <iostream>
using namespace std;
int main() {
    int choice;
    cout << "Enter the colour of the trafic light"<< endl;
    cout << endl <<"1. Red" << endl << "2. Yellow" << endl << "3. Green"<< endl;
    cout << " : ";
    cin >> choice;
    
    switch(choice){
    case 1:
        cout << "Please STOP";
        break;
    case 2:
        cout << "Please SLOW DOWN";
        break;
    case 3:
        cout << "GET SET GO";
        break;
    }
    

    return 0;
}
