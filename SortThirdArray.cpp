#include <iostream>
#include <algorithm>
#include <fstream>
using namespace std;

int main() {

    ifstream in1("Abdullah_1.txt",ios::in);
    
    const int SIZE= 30;
    int SingleSIZE = 15;
    int arr1[SingleSIZE];
    int arr2[SingleSIZE];
    int arr3[SIZE];

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


    int i = 0, j = 0, k = 0;
    while (i < SingleSIZE && j < SingleSIZE) {
        if (arr1[i] < arr2[j]) {
            arr3[k++] = arr1[i++];
        } else {
            arr3[k++] = arr2[j++];
        }
    }
    while (i < SingleSIZE) {
        arr3[k++] = arr1[i++];
    }
    while (j < SingleSIZE) {
        arr3[k++] = arr2[j++];
    }

    ofstream out("Sorted_Array.txt", ios::app);

    for (int i = 0; i < SIZE; i++) {
        out << arr3[i] << endl;
    }
    out << "New Run:\n";
    out.close();
    cout << "Data has been written to Sorted_Array.txt file successfully!" << endl;
    

    return 0;
}
