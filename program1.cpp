#include <iostream>
using namespace std;
template <typename T> T* sortir(T* arr, int size)
{
    T p=0;
    for(int i=1;i<size;i++) {
        if(arr[i-1]>arr[i]) {
            p=arr[i-1];
            arr[i-1]=arr[i];
            arr[i]=p;
            i=0;
        }
    }
    for(int i=0;i<size;i++)
        cout<<arr[i]<<endl;    
}

int main()
{
    int arr[5]={12,14,-422,821,0};
    double mass[3]={12.1,34.6,-74.2};
    sortir(arr,5);
    cout<<endl;
    sortir(mass,3);
    return 0;
}
