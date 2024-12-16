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
     int count1=0;
    for (int p = 0;p<SingleSIZE;p++){
        arr3[count1++] = arr1[p];
    }
    int count2=SingleSIZE;
    for (int h = 0;h<SingleSIZE;h++){
            arr3[count2++] = arr1[h];
    
    }

    for (int i = 0;i<SIZE-1;i++){
        for(int j = 0;j<SIZE-i-1;j++){
            if(arr3[j]>arr3[j+1]){
                swap(arr3[j],arr3[j+1]);
            }
        }
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
