#include <iostream>
#include <algorithm>
#include <fstream>
using namespace std;

int main() {

    ifstream in1("Abdullah_1.txt",ios::in);
    

    int SingleSIZE = 15;
    int arr1[SingleSIZE];
    int arr2[SingleSIZE];

    if(!in1 ){
        cout<<"File not found!!"<<endl;
        return 1;
    }
    for (int i = 0;i<SingleSIZE;i++){
        in1>>arr1[i];
       
    }
    in1.close();

    ifstream in2("Abdullah_2.txt",ios::in);
    if(!in2 ){
        cout<<"File not found!!"<<endl;
        return 1;
    }
    for (int i = 0;i<SingleSIZE;i++){
        in2>>arr2[i];
       
    }
    in2.close();

    // SELECTION SORT
    for(int i= 0; i<SingleSIZE-1; i++)
    {
        for(int j= 0; j<SingleSIZE-1-i; j++)
        {
            if(arr1[j] > arr1[j+1])
                swap(arr1[j], arr1[j+1]);

            if(arr2[j] > arr2[j+1])
                swap(arr2[j], arr2[j+1]);    
        }
    }

    ofstream out("Sorted_Array.txt", ios::app);
    // ofstream out("Sorted_Array.txt",ios::out | ios::app);  // appends
    // out << "New Run:\n";

    out << "Sorted values from Abdullah_1.txt:\n";
    for (int i = 0; i < SingleSIZE; i++) {
        out << arr1[i] << endl;
    }

    // Write the sorted data of the second array to the output file
    out << "Sorted values from Abdullah_2.txt:\n";
    for (int i = 0; i < SingleSIZE; i++) {
        out << arr2[i] << endl;
    }
    out << "New Run:\n";
    out.close();
    cout << "Data has been written to Sorted_Array.txt successfully!" << endl;
    

    return 0;
}
