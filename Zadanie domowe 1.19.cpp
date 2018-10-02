#include <iostream>

using namespace std;

int main()
{

    // -4, -1, 2, 5, 8, 11, 14
    int i;
    for (i=-4; i<15; i=i+3)
    cout << i << " " ;


    // -4 -1 5 11 14
   int i=-4;
    int b = -3;
    cout << i << " " ;
    for (i=-4; i<14; i=i+3)
    {
        if (i%3==-1) i = i+3;
            else i= i+3;
        cout << i << " ";
    }

    cout << i << " " << endl;



    // 12, 8, 4, 0, -4, -8, -12
     int i;
    for (i=12; i>-13; i=i-4)
    cout << i << " " ;



    //12, 8, 4, -4, -8, -12
    int i = 12;
    int d=-4;
    cout << i << " ";
    for (i=12; i>-12;  i=i-4)
    {
        if(i%3==0) i=i+d;
            cout << i <<" " ;
    }
        cout << i << " " ;


    return 0;
}
