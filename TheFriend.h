//#ifndef CPPREVISION_THEFRIEND_H
//#define CPPREVISION_THEFRIEND_H
//
//#endif //CPPREVISION_THEFRIEND_H
class Friendly;
class TheFriend{
public:
  void DoSomething(Friendly & dest, const Friendly & src);
};

class Friendly{
    friend class TheFriend;
private:
    int _i;
public:
    Friendly(int i = 4): _i(i){}
    int getter(){ return _i;}
};