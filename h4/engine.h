#ifndef ENGINE_H
#define ENGINE_H

class Engine
{
private:
    int horsepower;
    double displacement;

public:
    Engine();
    Engine(int, double);
    double getDisplacement() const;
    void setDisplacement(double);
    int getHorsepower() const;
    void setHorsepower(int);
};

#endif // ENGINE_H
