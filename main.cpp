#include <iostream>

using namespace std;

int main()
{ int A,B;
    cout << "A haqiqiy son kiritlisin" << endl;
    cin>>A;
    cout<<"B haqiqiy son kiritilsin"<< endl;
    cin>>B;
    switch(A,B)
    {
        case 1: cout<<"qo'shis"<< A+B<<break;
        case 2: cout<<"ayirish"<<A-B<<break;
        case 3:cout<<"bo'lish="<<A/B<<break;
        case 4:cout<<"ko'paytirish="<<A*B<<break;
        case 5:cout<<"hech qaysi amal emas";break;
    }
    return 0;
}
