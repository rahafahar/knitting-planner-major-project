#ifndef FIT_H
#define FIT_H
#include <iostream>
#include "Yarn.h"

using namespace std;

//This class is a visualizer/renderer. it "draws" the expected garment
// maybe even draw just part of the garment user has finished knitting ??? idk.. tbd
//The more ambitious part: potentially uses yarn info to create multiple visuals that
// help user determine which yarn to use instead of playing the guessing game
//Uses information from 'Yarn' class to better render user's project
// takes pattern info from user

class Fit {

    private:
        int rows;
        int width;
        int sleeveRows;
        
    public:
        void draw();
        Fit();
        ~Fit();
};

#endif
