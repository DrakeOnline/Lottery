
// |========================================================|
// | Title:         LottoPick                               |
// | Author:        Drake G. Cummings                       |
// | Description:   Test the speed on certain algorithms    |
// |                    using a lottery simulator           |
// |========================================================|

#include <iostream>
#include <stdlib.h>
#include "algorithms.h"
#include "playground.h"

using namespace std;


int main() {
    DrakeOnline::Algorithm algorithm;

    // Decrement Algorithm Testing
    int* decrementArrayOutput;
    decrementArrayOutput = algorithm.decrement();
    cout << "Decrement algorithm results:" << endl;
    for(unsigned short int i = 0; i < 5; i++) {
        if (i!=4) {
            cout << *(decrementArrayOutput+i) << ", ";
        } else {
            cout << *(decrementArrayOutput+i) << endl << endl;
        }
    }

    // Knuth Algorithm Testing
    int* knuthArrayOutput;
    knuthArrayOutput = algorithm.knuthShuffle();
    cout << "Knuth algorithm results:" << endl;
    for(unsigned short int i = 0; i < 5; i++) {
        if (i!=4) {
            cout << *(knuthArrayOutput+i) << ", ";
        } else {
            cout << *(knuthArrayOutput+i) << endl << endl;
        }
    }


    // Subarray Algorithm Testing
    vector<int> subVector = algorithm.subArraylist();
    cout << "Subvector Algorithm results:" << endl;
    for(vector<int>::iterator it = subVector.begin(); it != subVector.end(); ++it) {
        if(it!=subVector.end()-1) {
            cout << *it << ", ";
        } else {
            cout << *it << endl << endl;
        }

    }
}
