#include "cars.h"

int main(){
    int size = 0, capacity = 4;
    char input;
    Car* cars[capacity];
    bool finished = false;
    int lap = 0;
    do{
        cout << "Would you like to enter a car in the race or begin the race? Please select the option that is best for you." << endl;
        cout << "(S)edan" << endl;
        cout << "(H)atchBack" << endl;
        cout << "(R)acecar" << endl;
        cout << "(B)egin" << endl;
        cout << "(Q)uit" << endl;
        cin >> input;
    
        switch(input){
            case 's':
            case 'S':
                cars[size++] = new Sedan();
                break;
            case 'h':
            case 'H':
                cars[size++] = new HatchBack();
                break;
            case 'r':
            case 'R': 
                cars[size++] = new Racecar();
                break;
            case 'b':
            case 'B':
                while(!finished){
                    lap++;
                    for(int i = 0; i < size; i++){
                        if(cars[i]!= nullptr){ //so we do not loop over cars that have finished the race
                            cars[i]->SpeedUp();
                            cout << "Lap "<< lap << ": The current speed for car " << i + 1 << " is: " << cars[i]->getSpeed() << endl;
                            cout << "Lap " << lap << ": The current position for car " << i + 1 << " is: " << cars[i]->getPosition() << endl;;
                            if(cars[i]->getPosition() >= 25){
                                cout << "Car " << i + 1 << " has won the race!" << endl;
                                finished = true;
                                break;
                            }
                        }
                    }
                }
                for(int i = 0; i < 4; i++){
                    if(cars[i] != nullptr){
                        delete cars[i];
                    }
                }
                return 0;
            case 'q':
            case 'Q':
                cout << "I hope you enjoyed the race!" << endl;
                for(int i = 0; i < 4; i++){
                    if(cars[i] != nullptr){
                        delete cars[i];
                    }
                }
                return 0;
                break;
            default:
                cout << "Sorry I cannot do that." << endl;
    }
    }while(input != 'q' && input != 'Q');
}