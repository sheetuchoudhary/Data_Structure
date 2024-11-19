#include <iostream>
using namespace std;

int main() {
    int size_num ;
    cout<<"Enter the size or array : ";
    cin>>size_num;
    int arr[size_num];
    int i=0;
    for(int i=0;i<size_num;i++){
      cout<<"enter the element "<< i+1 << " of array :";
      cin>>arr[i];
    }
    cout << "The array is: ";
    cout<<"[";
    for (int i = 0; i < size_num; i++) {
        cout <<arr[i]<< ",";
    }
    cout<<"]"<<endl;
    
    int max_num = arr[0];
    for (int j=0;j<size_num;j++){

        if (arr[j]>max_num){
          max_num = arr[j];
        }
    }
          cout<<"the maximum number : "<<max_num<<endl;
          return 0;

}

