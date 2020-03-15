
// |========================================================|
// | Title:         LottoPick                               |
// | Author:        Drake G. Cummings                       |
// | Description:   Test the speed on certain algorithms    |
// |                    using a lottery simulator           |
// |========================================================|

#include <iostream>
#include <stdlib.h>
#include "Algorithms.h"
#include "Timer.h"

using namespace std;


int main() {
    DrakeOnline::Algorithm algorithm;

    // 1,000 Decrement
    DrakeOnline::Timer decrementTimer;

    decrementTimer.Start();
    for(unsigned short int i = 0; i < 1'000; i++) {
        algorithm.decrement();
    }
    decrementTimer.Stop();
    cout << "Decrement\t1,000 times:\t\t" << decrementTimer.GetTime() << endl;
    decrementTimer.Reset();

    // 1,000 Knuth
    DrakeOnline::Timer knuthTimer;
    knuthTimer.Start();
    for(unsigned short int i = 0; i < 1'000; i++) {
        algorithm.knuthShuffle();
    }
    knuthTimer.Stop();
    cout << "Knuth\t\t1,000 times:\t\t" << knuthTimer.GetTime() << endl;
    knuthTimer.Reset();

    // 1,000 Subvector
    DrakeOnline::Timer subTimer;
    subTimer.Start();
    for(unsigned short int i = 0; i < 1'000; i++) {
        algorithm.subVector();
    }
    subTimer.Stop();
    cout << "Subvector\t1,000 times:\t\t" << subTimer.GetTime() << endl << endl;
    subTimer.Reset();




    // 10,000 Decrement
    decrementTimer.Start();
    for(unsigned short int i = 0; i < 10'000; i++) {
        algorithm.decrement();
    }
    decrementTimer.Stop();
    cout << "Decrement\t10,000 times:\t\t" << decrementTimer.GetTime() << endl;
    decrementTimer.Reset();

    // 10,000 Knuth
    knuthTimer.Start();
    for(unsigned short int i = 0; i < 10'000; i++) {
        algorithm.knuthShuffle();
    }
    knuthTimer.Stop();
    cout << "Knuth\t\t10,000 times:\t\t" << knuthTimer.GetTime() << endl;
    knuthTimer.Reset();

    // 10,000 Subvector
    subTimer.Start();
    for(unsigned short int i = 0; i < 10'000; i++) {
        algorithm.subVector();
    }
    subTimer.Stop();
    cout << "Subvector\t10,000 times:\t\t" << subTimer.GetTime() << endl << endl;
    subTimer.Reset();




    // 100,000 Decrement
    decrementTimer.Start();
    for(unsigned int i = 0; i < 100'000; i++) {
        algorithm.decrement();
    }
    decrementTimer.Stop();
    cout << "Decrement\t100,000 times:\t\t" << decrementTimer.GetTime() << endl;
    decrementTimer.Reset();

    // 100,000 Knuth
    knuthTimer.Start();
    for(unsigned int i = 0; i < 100'000; i++) {
        algorithm.knuthShuffle();
    }
    knuthTimer.Stop();
    cout << "Knuth\t\t100,000 times:\t\t" << knuthTimer.GetTime() << endl;
    knuthTimer.Reset();

    // 100,000 Subvector
    subTimer.Start();
    for(unsigned int i = 0; i < 100'000; i++) {
        algorithm.subVector();
    }
    subTimer.Stop();
    cout << "Subvector\t100,000 times:\t\t" << subTimer.GetTime() << endl << endl;
    subTimer.Reset();




    // 100,000 Decrement
    decrementTimer.Start();
    for(unsigned int i = 0; i < 1'000'000; i++) {
        algorithm.decrement();
    }
    decrementTimer.Stop();
    cout << "Decrement\t1,000,000 times:\t" << decrementTimer.GetTime() << endl;
    decrementTimer.Reset();

    // 100,000 Knuth
    knuthTimer.Start();
    for(unsigned int i = 0; i < 1'000'000; i++) {
        algorithm.knuthShuffle();
    }
    knuthTimer.Stop();
    cout << "Knuth\t\t1,000,000 times:\t" << knuthTimer.GetTime() << endl;
    knuthTimer.Reset();

    // 100,000 Subvector
    subTimer.Start();
    for(unsigned int i = 0; i < 1'000'000; i++) {
        algorithm.subVector();
    }
    subTimer.Stop();
    cout << "Subvector\t1,000,000 times:\t" << subTimer.GetTime() << endl << endl;
    subTimer.Reset();


}
