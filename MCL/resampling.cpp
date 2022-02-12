#include <iostream>

using namespace std;

double w[] = { 0.6, 1.2, 2.4, 0.6, 1.2 };//You can also change this to a vector

//TODO: Define a  ComputeProb function and compute the Probabilities


double  *ComputeProb(double w[], int n)
{
    double sum = 0;

    // build the sum of all weights
    for (int i = 0; i < n; i++) {
        sum = sum + w[i];
    }

    // compute the normalized weights for each weight (the sum of all weights would be 1)
    for (int j = 0; j < n; j++) {
        w[j] = w[j] / sum;
        // cout << "P" << j + 1 << "=" << w[j] << endl;
    }
    return w;
}






int main()
{
    //TODO: Print Probabilites each on a single line:
    //P1=Value
    //:
    //P5=Value
    

    int wSize = sizeof(w) / sizeof(w[0]);
 
    double *p = ComputeProb(w, wSize);
    
    for (int i = 0; i < wSize; i++)
    {
        cout << "P" << i + 1 << "=" << p[i] << endl;
    }
    
    
    
    return 0;
}