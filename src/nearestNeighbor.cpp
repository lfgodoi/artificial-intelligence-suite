// Importing libraries
#include <iostream>
#include <cmath>

// Settings namespaces
using namespace std;

// Computing the Euclidean distance between two points
float euclideanDistance(float *a, float *b) {
    int nFeatures = sizeof(a)/sizeof(a[0]);
    float distance = 0.0;
    for (int i = 0; i < nFeatures; i++) {
        distance += (a[i] - b[i]);
    }
    distance = sqrt(pow(distance, 2));
    return distance;
}

// 1-NN class
class NearestNeighbor {

    private:

        // Declaring the algorithm attributes
        float **xTrain;
        int *yTrain;;
        int nSamples;

    public:

        // Setting values to the attributes
        void train(float **xTrain, int *yTrain, int nSamples) {
            this->xTrain = xTrain;
            this->yTrain = yTrain;
            this->nSamples = nSamples;
            return;
        }

    // Classifying a given point
    int classify(float *xTest) {

        // Computing the distance between the test point and each train point
        int minIndex = 0;
        float minDistance = INFINITY;
        float distance = 0;
        for (int i = 0; i < this->nSamples; i++) {
            distance = euclideanDistance(this->xTrain[i], xTest);
            if (distance < minDistance) {
                minDistance = distance;
                minIndex = i;
            }
        }

        // Getting the class label corresponding to the minimum
        int yTest = yTrain[minIndex];

        // Returning a class label
        return yTest;

    };
};

// Testing the algorithm
int main() {

    // Settings the experiment attributes
    int nFeatures = 2;
    int nSamples = 10;

    // Generating random arrays for test and train
    float **xTrain;
    xTrain = new float*[nSamples];
    int yTrain[nSamples];
    float xTest[nFeatures];
    for (int i = 0; i < nSamples; i++) {
        xTrain[i] = new float[nFeatures];
        yTrain[i] = 0;
    };
};