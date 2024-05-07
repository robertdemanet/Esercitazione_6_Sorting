#include<chrono>
#include<iostream>
#include<unistd.h>
#include<numeric>
#include<vector>
#include<algorithm>
#include<SortingAlgorithm.hpp>

using namespace std;
using namespace SortLibrary;



int main(int argc, char**argv)
{
    size_t size=std::atoi(argv[1]);

    vector<int> intVector=RandomVector<int>(size);
    vector<double> doubleVector=RandomVector<double>(size);
    vector<float> floatVector=RandomVector<float>(size);

    int n = 100; // numero di simulazioni
    double sum_merge_int = 0;
    double sum_bubble_int = 0;

    for (int var = 0; var < n; ++var) {
        double Time_I_MS= ComparisonTime(MergeSort,intVector);
        sum_merge_int = sum_merge_int + Time_I_MS;
        double Time_I_BS=ComparisonTime(BubbleSort,intVector);
        sum_bubble_int = sum_bubble_int + Time_I_BS;
    }

    cout<<"Per il vettore di interi MergeSort impiega mediamente: "<< sum_merge_int/n <<" e BubbleSort impiega mediamente: "<< sum_bubble_int/n << endl;


    double sum_merge_double = 0;
    double sum_bubble_double = 0;

    for (int var = 0; var < n; ++var) {
        double Time_D_MS= ComparisonTime(MergeSort,doubleVector);
        sum_merge_double = sum_merge_double + Time_D_MS;
        double Time_D_BS=ComparisonTime(BubbleSort,doubleVector);
        sum_bubble_double = sum_bubble_double + Time_D_BS;
    }

    cout<<"Per il vettore di double MergeSort impiega mediamente: "<< sum_merge_double/n <<" e BubbleSort impiega mediamente: "<< sum_bubble_double/n << endl;


    double sum_merge_float = 0;
    double sum_bubble_float = 0;

    for (int var = 0; var < n; ++var) {
        double Time_F_MS= ComparisonTime(MergeSort,floatVector);
        sum_merge_float = sum_merge_float + Time_F_MS;
        double Time_F_BS=ComparisonTime(BubbleSort,floatVector);
        sum_bubble_float = sum_bubble_double + Time_F_BS;
    }

    cout<<"Per il vettore di float MergeSort impiega mediamente: "<< sum_merge_float/n <<" e BubbleSort impiega mediamente: "<< sum_bubble_float/n << endl;

}
