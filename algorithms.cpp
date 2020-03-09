
#include <random>
#include <algorithm>
#include <vector>
#include "algorithms.h"

using namespace std;

namespace DrakeOnline {

    int* Algorithm::decrement () {
        static int numberArray[5];
        for (int i = 0; i < 5; i++) {
            numberArray[i] = generateRandomNumber(1,47);

            for (int j = 0; j < i; j++) {
                if (numberArray[i] == numberArray[j]) {
                    i--;
                    break;
                }
            }
        }
        return numberArray;
    }

    int* Algorithm::knuthShuffle () {
        // Create an array of integers
        static int randomNumbers[5];
        for(int i=0; i<5; ++i) {
            randomNumbers[i] = i;
        }

        // Knuth Shuffle
        for(int i=0; i<5; ++i) {
            int randomIndex = floor((generateRandomNumber(1, 10)/10.0) * (i + 1));
            int temp = randomNumbers[i];
            randomNumbers[i] = randomNumbers[randomIndex];
            randomNumbers[randomIndex] = temp;
        }

        return randomNumbers;
    }

    vector<int> Algorithm::subArraylist (void) {
        vector<int> numbers;

        for(int i = 0; i < 47; i++) {
            numbers.insert(numbers.begin(), i);
        }

        random_shuffle(numbers.begin(), numbers.end());
        vector<int> slicedNumbers(numbers.begin(), numbers.begin()+5);
        return slicedNumbers;
    }

    int Algorithm::generateRandomNumber(int lowRange, int highRange) {
        static random_device rd;
        //int seed = 221;
        mt19937 eng(rd());
        uniform_int_distribution<int> distr(lowRange, highRange);

        return distr(eng);
    }

}
