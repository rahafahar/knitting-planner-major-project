#ifndef TIMER_H
#define TIMER_H
#include <iostream>

using namespace std;

// this class has preset timers that the user starts and knits during alloted time
// include prompts for user to pick which time frame they would prefer working with
// stores row-per-Xminutes user knits (? or maybe somewhere else tbd)

class Timer {

    private:
        double time;
        const double duration1;
        const double duration2;
        const double duration3;

    public:
        void start();
        void stop();
        Timer();
        ~Timer();
};

#endif
