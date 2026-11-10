#ifndef PLANNER_H
#define PLANNER_H
#include <iostream>

#include "Timer.h"
#include "Yarn.h"

using namespace std;

// this class is responsible for the planning aspect of the project
// it uses information gathered from Timer and Yarn classes to plan
// can plan for you according to speed or according to intended completion time



class Planner {

    private:
        double days;
        double weeks;
        void calculate(Timer t);
        

    public:
        void getPlan(double x);
        string setPlan(Planner p);
        Planner();
        ~Planner();
};

#endif
