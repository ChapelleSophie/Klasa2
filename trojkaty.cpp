#include <iostream>
#include <iomanip>
using namespace std;

int main()
{


    //prostokat

    int m,n;
    cin>>m>>n;
    for(int i=1;i<=m;i++)
    {

        for (int j=1;j<=n;j++)
        {
            cout << "*";

        }cout<<endl;



    }




//trojkat prostokatny

int n;
cin>>n;
for (int i=1;i<=n;i++)
{
    for (int j=1;j<=i;j++)
    {
        cout <<"*";
    }cout <<endl;
}




//trojkat rownoramienny

int n;
cin >>n;
for (int i=1;i<=n;i++)
{
    cout <<setw(n-i);

    for(int j=1;j<=i;j++)
    {
        cout << "*";

    }
    cout <<endl;

}


//trojkat prostokatny odworcony

int n;
cin >>n;
for (int i=1;i<=n;i++)
{
 for (int j=n;j>=i;j--)
 {
     cout <<"*";
 }
    cout << endl;
}
















    return 0;
}
