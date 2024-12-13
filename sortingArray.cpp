#include <iostream>
#include <algorithm>
#include <fstream>
using namespace std;

int main() {

    ifstream in("Abdullah.txt",ios::in);
    const int SIZE= 15;
    int arr[SIZE];

    if(!in){
        cout<<"File not found!!"<<endl;
        return 1;
    }else{
        cout<<"File Created successfully!!!"<<endl;
    }
    for (int i = 0;i<15;i++){
        in>>arr[i];
    }
    in.close();
    ofstream out("Abdullah.txt",ios::out);

    sort(arr,arr + SIZE,greater<int>());

    for (int i = 0;i<15;i++){
        out<<arr[i]<<endl;
    }
    out.close();
    return 0;
}
