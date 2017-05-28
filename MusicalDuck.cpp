#include <iostream>
using namespace std;

class Duck{
public:
    Duck(int weight = 1):weight(weight){}

    int GetWeight() const { return weight; }

//protected:
    int weight;
};

class Instrument{
public:
    Instrument(int wieght = 1, int volume = 1)
            :weight(weight), volume(volume){}
    int GetVolume() const{ return volume; }

    int GetWeight() const { return  weight; }

//protected:
    int volume;
    int weight;
};

//Composition
class MusicalDuck1{
    MusicalDuck1(int weight = 1, int volume = 2)
            : d(weight), i(weight, volume){}

    int GetVolume() const { return i.volume; }

    int GetInstWeight() const { return  i.GetWeight();}

    int GetDuckWeight() const { return d.GetWeight();}

    Duck d;
    Instrument i;
};

//Inheritance
class MusicalDuck2
:public Duck, public Instrument{
public:
    MusicalDuck2(int weight = 1, int volume = 2)
            : Duck(weight), Instrument(weight, volume){}
};
