#include <iostream>

using namespace std;

/*
///zad.3c)

bool funkcja(int a)
{
    {
        if(a>0) return true;
    }
    return false;
}

int main()
{
   int a,b;
   cin>>a>>b;
   a=2*a-b;
   if(funkcja(a)) cout << "TAK";
   else cout << "NIE";

}
//inny przyklad



void funkcja2(int a,int b)
{
    if (2*a-b>0)
        cout << "TAK";
        else cout <<"NIE";
}
int main()
{
    int a,b;
    cin>>a>>b;
    funkcja2(a,b);
}*/
//inny przyklad

bool funkcja3(int a, int b)
{
    return 2*a-b>0;
}
int main()
{
    int a,b;
    cin >>a>>b;
    cout << funkcja3(a,b);
}

///brak true or false + wyniki :1=tak,0=nie


















