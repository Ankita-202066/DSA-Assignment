/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
     int i,j,value,rows,columns,check=0;

    cout<<"Enter number of rows: ";
    cin>>rows;
    cout<<"Enter number of columns: ";
    cin>>columns;
    int arr[rows][columns];
    cout<<"Enter the elements of Array"<<endl;
    for (i=0;i<rows;i++){
        for(j=0;j<columns;j++){
            cout<<"Element "<<"("<<i<<','<<j<<"): ";
            cin>>arr[i][j];
        }
    }

    cout<<"Enter the element to be searched: ";
    cin>>value;

    for (i=0;i<rows;i++){
        for (j=0;j<columns;j++){
            if (value == arr[i][j]){
                cout<<value<<" found at position " << " ("<<i<<','<<j<<")"<<endl;
                check = 1;
            }
        }
    }
    if (check == 0){
        cout<<value<<" Element not found"<<endl;
    }


    return 0;
}
