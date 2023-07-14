#include <iostream>
#include <iomanip>
using namespace std;

double getAboveAveragePercentage(int n);
int main(){
    int testNum; //number of test cases
    cin >> testNum;

    double* aboveAverage = new double[testNum];
     
    int peopleNum; //number of people in the class
    
    for(int i=0;i<testNum;i++){
        cin >> peopleNum;
        aboveAverage[i] = getAboveAveragePercentage(peopleNum);
    }
    cout << fixed;
    cout << setprecision(3);
    for(int i=0;i<testNum;i++){
        cout<<aboveAverage[i]<<"%"<<endl;
    }
    return 0;
}

double getAboveAveragePercentage(int n){
    double percentage, average;
    int count;
    int* scores = new int[n];

    count = 0;
    for(int i = 0;i<n;i++){
        cin >> scores[i];
        count += scores[i];
    }
    average = (float)count/n;
    count = 0;
    for(int i = 0;i<n;i++){
        if(scores[i]>average) count++;
    }
    percentage = (double)count/n;
    delete [] scores;
    return percentage*100;
}
