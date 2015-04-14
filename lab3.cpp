#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
using namespace std;
int main (){

    ifstream inFile("file.in",ios::in);
    int size;
    inFile>>size;
    vector<int> weight(size);
    for(int i=0;i<weight.size();i++)
        inFile>>weight[i];
    
    sort(weight.begin(),weight.end());
    
    ofstream outFile("file.out",ios::out);
    
    for(int i=0;i<weight.size();i++)
        outFile<<weight[i]<<endl;
    
    int sum=0;
    for(int i=weight.size()-1;i>weight.size()-6;i--)
        sum+=weight[i];
    outFile<<"top five="<<sum<<endl;


}
