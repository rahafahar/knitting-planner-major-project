#ifndef YARN_H
#define YARN_H
#include <iostream>



using namespace std;

//this class is responsible of taking yarn information provided by the user
// as well as storing preset commonly yarn types for the user to be able to choose from
// it stores information about fabrics in general in order to be able to better estimate fabric drape
//fabric drape information will be used by 'Fit' class
// uses needle size information to factor that into planning aspect - used by 'Planner'

class Yarn {

    private:
        double needleSize;
        double yarnWidth;
        int size = 10;
        string ** material = new string*[size];
    public:
        
        void getMaterial();
        string setMaterial(string n);
        void getNeedleSize();
        double setNeedleSize(double needle);
        void getYarnWidth();
        double setYarnWidth(double yarnW);
        Yarn();
        ~Yarn();

};

#endif
