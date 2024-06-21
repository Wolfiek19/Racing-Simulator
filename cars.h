#include <iostream>
using namespace std;

class Car{
    public:
        virtual void SpeedUp() = 0;
        virtual int getSpeed() const = 0;
        virtual int getTopSpeed() const = 0;
        virtual int getPosition() const = 0;
        virtual ~Car();
    protected:
        int speed;
        int TopSpeed;
        int position;
       
};

class Sedan : public Car{
    private:
    public:
        Sedan();
        void SpeedUp();
        int getSpeed() const;
        int getTopSpeed() const;
        int getPosition() const;
        ~Sedan();
};

class HatchBack : public Car{
    private:
    public:
        HatchBack();
        void SpeedUp();
        int getSpeed() const;
        int getTopSpeed() const;
        int getPosition() const;
        ~HatchBack();
};

class Racecar : public Car{
    private:
    public:
        Racecar();
        void SpeedUp();
        int getSpeed() const;
        int getTopSpeed() const;
        int getPosition() const;
        ~Racecar();
};