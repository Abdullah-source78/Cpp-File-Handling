#include <iostream>
#include <algorithm>
#include <fstream>
using namespace std;

int main() {

    ifstream in1("Abdullah_1.txt",ios::in);
    
    const int SIZE= 30;
    int SingleSIZE = 15;
    int arr[SIZE];

    if(!in1 ){
        cout<<"File not found!!"<<endl;
        return 1;
    }else{
        cout<<"File Created successfully!!!"<<endl;
    }
    for (int i = 0;i<SingleSIZE;i++){
        in1>>arr[i];
       
    }
    in1.close();

    ifstream in2("Abdullah_2.txt",ios::in);
    if(!in2 ){
        cout<<"File not found!!"<<endl;
        return 1;
    }else{
        cout<<"File Created successfully!!!"<<endl;
    }
    for (int i = SingleSIZE;i<SIZE;i++){
        in2>>arr[i];
       
    }
    in2.close();

    // SELECTION SORT
    for(int i= 0; i<SIZE-1; i++)
    {
        for(int j= 0; j<SIZE-1-i; j++)
        {
            if(arr[j] > arr[j+1])
                swap(arr[j], arr[j+1]);
        }
    }

    // ofstream out("Sorted_Array.txt", ios::out);
    ofstream out("Sorted_Array.txt",ios::out | ios::app);  // appends
    out << "New Run..........:\n";

    for (int i = 0;i<SIZE;i++){
        out<<arr[i]<<endl;
    }
    out.close();


    ofstream evenOut("Sorted_Array.txt",ios::app);
    evenOut<<"Even Sequence .....:\n";

    for(int i = 0;i<SIZE;i++){

        if(arr[i]%2==0){
            evenOut<<arr[i]<<endl;
        }
    }
    evenOut.close();

   
    return 0;
}
