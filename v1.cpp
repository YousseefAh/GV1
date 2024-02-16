#include <iostream>

using namespace std;
int main()
{

    int marks[100];
    cout<<"how many students";
    int numstudends;
    cin>>numstudends;
    cout<<"Fill the array";

    for (int i=0 ;i<numstudends;i++){
        cin>> marks[i];
    }
    for(int i=0;i<numstudends;i++){
        cout<<marks[i] ;
    }
}
