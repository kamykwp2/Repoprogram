#include <iostream>
#include <cstdlib>
#include <random>
int main()
{
    using namespace std;
    default_random_engine generator;
    uniform_int_distribution<int> distribution(1,6);
    int kostka = distribution(generator);
    for(int i =0, i<10, i++)
        cout << kostka;
    return 0;


}

