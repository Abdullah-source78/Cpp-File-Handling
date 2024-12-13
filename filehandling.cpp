// #include <iostream>
// #include <fstream>


// using namespace std;

// int main() {
    /*const int SIZE = 5;
    int arr[SIZE] = {23,565,3244,6,43};
    ofstream in("Abdullah.txt");
    ofstream in("Abdullah.txt",ios::out);
    if(in.fail()){
    if(in.is_open()){
        cout<<"File created successfully"<<endl;
        for (int i = 0;i,SIZE;i++){
            in<<arr[i]<<endl;
        }

    }else{
        cout<<"File not open ::";
    }
    in.close();*/



    // const int SIZE = 10;
//     int newArr[SIZE] = {23,565,3244,6,43,454,35,3,53,3};

//     ofstream out("even.txt",ios::out);
//     ifstream in("Abdullah.txt",ios::in);

//     if(in.fail()){
//         cout<<"File not Found !!";
        

//     }else{
//         cout<<"File created successfully"<<endl;


//         for (int i = 0;i<SIZE;i++){
            
//             if(newArr[i]%2==0){
//                 out<<newArr[i]<<endl;

//             }
            
//         }
//     }
//     in.close();

//     return 0;
// }



//     if(in.fail()){
//         cout<<"File not Found !!";
//         return 1;

//     }


//     for (int i = 0;i<SIZE;i++){
        
//         if(newArr[i]%2==0){
//             out<<newArr[i]<<endl;

//         }
        
//     }
    
//     in.close();

//     return 0;
// }






//     const int SIZE = 10;
//     int newArr[SIZE]; 

//     ifstream in("Abdullah.txt", ios::in); 
//     ofstream out("even.txt", ios::out);  

//     if (!in) { 
//         cout << "File Abdullah.txt not found!" << endl;
//         return 1;
//     }

    

//     int i = 0;
//     while (in >> newArr[i] && i < SIZE) { 
//         i++;
//     }

//     in.close(); 

    

//     for (int j = 0; j < i; j++) { 
//         if (newArr[j] % 2 == 0) { 
//             out << newArr[j] << endl; 
//         }
//     }

//     out.close();

//     cout << "Even numbers stored even.txt !" << endl;

//     return 0;
// }
// #include <iostream>
// #include <fstream>
// using namespace std;

// int main() {

//     ofstream out("even.txt",ios::out);
//     ifstream in("Abdullah.txt",ios::in);

//     const int SIZE = 16;
//     int array[SIZE];
//     for(int i = 0;i<SIZE;i++){
//         in>>array[i];
//         if(array[i]%2==0){
//             out<<array[i]<<endl;
//             // cout<<array[i]<<endl;
//         }

//     }
//     in.close();
//      out.close();
//     return 0;
// }




#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream outeven("even.txt",ios::out);
    ofstream outodd("odd.txt",ios::out);
    ifstream in("Abdullah_1.txt",ios::in);
    int arr[15];
    int evenidx=0,oddidx= 0;
    if(!in){
        cout<<"File not found!!"<<endl;
        return 1;
    }else{
        cout<<"File Created successfully!!!"<<endl;
    }
    for (int i = 0;i<15;i++){
        in>>arr[i];

        if(arr[i]%2==0){
            outeven<<arr[i];
            evenidx = i;
            outeven<<" At "<<evenidx<<" Index"<<endl;
        }else{
            outodd<<arr[i];
            oddidx = i;
            outodd<<" At "<<oddidx<<" Index"<<endl;


        }
    }
}
