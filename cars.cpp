#include "cars.h"

Car::~Car(){

}
//==============================Sedan======================================

Sedan::Sedan(){ //default constructor setting the speed = to 0 to start and setting top speed = to 2
    speed = 0;
    TopSpeed = 2;
    position = 0;
}
void Sedan::SpeedUp(){ // sedan version of speedup that increases the speed by 1 as long as the speed is not greater than topspeed and then increases the position
    if(speed < TopSpeed){
        speed += 1;
        if(speed >= TopSpeed){
            speed = TopSpeed;
        }
    }
    position += speed;

}
int Sedan::getSpeed() const{
    return speed;
}
int Sedan::getTopSpeed() const{
    return TopSpeed;
}
int Sedan::getPosition() const{
    return position;
}
Sedan::~Sedan(){

}

//==============================HatchBack==================================
HatchBack::HatchBack(){
    speed = 0;
    TopSpeed = 3;
    position = 0;
}

void HatchBack::SpeedUp(){ //hatchback version of speedup that increases the speed by 1 as long as the speed is not greater than topspeed and then increases the position
    if(speed < TopSpeed){
        speed += 1;
        if(speed >= TopSpeed){
            speed = TopSpeed;
        }
    }
    position += speed;
}
int HatchBack::getSpeed() const{
    return speed;
}
int HatchBack::getTopSpeed() const{
    return TopSpeed;
}
int HatchBack::getPosition() const{
    return position;
}
HatchBack::~HatchBack(){

}

//==============================Racecar====================================
Racecar::Racecar(){
    speed = 0;
    TopSpeed = 5;
    position = 0;
}
void Racecar::SpeedUp(){ //racecar version of speedup that increases the speed by 1 as long as the speed is not greater than topspeed and then increases the position
    if(speed < TopSpeed){
        speed += 1;
        if(speed >= TopSpeed){
            speed = TopSpeed;
        }
    }
    position += speed;
}
int Racecar::getSpeed() const{
    return speed;
}
int Racecar::getTopSpeed() const{
    return TopSpeed;
}
int Racecar::getPosition() const{
    return position;
}
Racecar::~Racecar(){

}