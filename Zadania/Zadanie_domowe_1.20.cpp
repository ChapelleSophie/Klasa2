#include <iostream>

using namespace std;

int main()
{ int x,i,n, g=-10;
cout <<"wybierz zadanie od 1-4\n(taki powinien byc ciag liczb)\n";


        cout << "1- (3,6,12,24,48...)"<<endl;;
        cout << "2- (-3,6,-12,24,-48...)"<<endl;;
        cout << "3- (-10,-4,2,8,14,20...)"<<endl;;
        cout << "4- (1,-2,4,-8,16,-32...)" <<endl;

  {

    cin >> x;
    switch (x)

{



   case 1:for (i=3; i<n; i=i*2)
        cout << i <<" ";

break;

    case 2:for(i=-3; i<n; i=i*(-2))
        cout << i <<" ";

break;

    case 3:cout << g <<" ";
        for (i=-10; i<20; i++)
        {
            g=g+6;
            cout << g <<" ";
        }


break;

    case 4:for (i=1;i<n; i=i*2*(-1))
        cout << i <<" ";
break;


}


  }
    return 0;

}
