#include <iostream>
using namespace std;
class Rectangle
{
private:
    int width;
    int height;
public:
    int square;
    Rectangle()
    {
        width=0.0;
        height=0.0;
    }
    Rectangle(int a, int b)
    {
        width=a;
        height=b;
        square=width*height;
    }

    friend ostream& operator<<(ostream& out, const Rectangle& s);
    bool operator>(Rectangle& s)
    {
        if(s.square>this->square)
            return false;
        return true;
    }
};
    
ostream& operator<<(ostream& out, const Rectangle& s)
{
    out<<s.square;
    return out;
}

template <typename T> T* sortir(T* arr, int size)
{
    T p;
    for(int i=1; i<size; i++) {
        if(arr[i-1]>arr[i]) {
            p=arr[i-1];
            arr[i-1]=arr[i];
            arr[i]=p;
            i=0;
        }
    }
    return arr;
}

int main()
{
    int size, a , b;
    cout<<"Размер массива: ";
    cin>>size;
    Rectangle* arr=new Rectangle[size];
    for(int i=0;i<size;i++) {
        cout<<"Длина: ";
        cin>>a;
        cout<<"Ширина: ";
        cin>>b;
        arr[i]=Rectangle(a,b);
        cout<<"S"<<i+1<<"="<<arr[i].square<<endl;
    }
    arr=sortir(arr,size);
    for(int i=0;i<size;i++)
        cout<<arr[i]<<endl;
    delete[] arr;
    return 0;
}
