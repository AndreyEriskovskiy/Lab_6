#include <iostream>
using namespace std;
template <typename T, typename P>
class DoubleBox
{
public:
    T value1=T();
    P value2=P();
    DoubleBox() {}
    DoubleBox(T a, P b): value1(a), value2(b) {}
    void get() const;
    void set(const T val1, const P val2);
};

template <typename T, typename P> void DoubleBox<T,P>::get() const
{
    cout<<"value1= "<<value1<<"\t"<<"value2= "<<value2<<endl;
    cout<<endl;

}

template <typename T, typename P> void DoubleBox<T,P>::set(const T val1, const P val2)
{
    value1=val1;
    value2=val2;
}

int main()
{
    DoubleBox<double,int> Int(27.12,13);
    Int.get();
    DoubleBox<double,int> a;
    a.get();
    Int.set(202.1,100);
    Int.get();
}
