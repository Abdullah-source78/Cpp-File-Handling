
#include <iostream>
#include <algorithm>
#include <fstream>
using namespace std;
void selectionsort(int a[], int S){
    for(int i=0;i<S-1;i++)
	{
        for(int j=i+1;j<S;j++)
        {
            if(a[j]>a[i])
            {
                swap(a[j],a[i]);
            }
        }
	}
}

void bubblesort(int a[],int S)
{
	for(int i= 0; i<S-1; i++)
    {
        for(int j= 0; j<S-1-i; j++)
        {
            if(a[j] > a[j+1])
                swap(a[j], a[j+1]);
        }
    }
}

int main() {

    ifstream in("Abdullah.txt",ios::in);
    const int SIZE = 15;
    int arr[SIZE];

    if(!in){
        cout<<"File not found!!"<<endl;
        return 1;
    }else{
        cout<<"File Created successfully!!!"<<endl;
    }
    for(int i = 0;i<SIZE;i++){
        in>>arr[i];
    }
    in.close();
    ofstream out("Abdullah.txt",ios::out);

    // cout<<"Sorting Array using Selection Sort Method"<<endl;
    // selectionsort(arr,SIZE);
    cout<<"Sorting Array using Bubble Sort Method"<<endl;
    bubblesort(arr,SIZE);

    for(int i =0;i<SIZE;i++){
        out<<arr[i]<<endl;
    }
    out.close();
    return 0;
}
