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


    double Time_I_MS= ComparisonTime(MergeSort,intVector);
    double Time_I_BS=ComparisonTime(BubbleSort,intVector);


    cout<<"Per il vettore di interi MergeSort impiega: "<< Time_I_MS <<" e BubbleSort impiega: "<< Time_I_BS << endl;

    double Time_D_MS= ComparisonTime(MergeSort,doubleVector);
    double Time_D_BS=ComparisonTime(BubbleSort,doubleVector);

    cout<<"Per il vettore di double MergeSort impiega: "<< Time_D_MS <<" e BubbleSort impiega: "<< Time_D_BS << endl;


    double Time_F_MS= ComparisonTime(MergeSort,floatVector);
    double Time_F_BS=ComparisonTime(BubbleSort,floatVector);


    cout<<"Per il vettore di float MergeSort impiega: "<< Time_F_MS <<" e BubbleSort impiega: "<< Time_F_BS << endl;

}
