#include <iostream>

using namespace std;

void utaalt(int f[5])
{
    if (f[0] > 10)
    {
        cout << f[0] << " - " << endl;
    }
    else if (f[1] > 10)
    {
        cout << f[1] << " - " << endl;
    }
    else if (f[2] > 10)
    {
        cout << f[2] << " - " << endl;
    }
    else if (f[3] > 10)
    {
        cout << f[3] << " - " << endl;
    }
    else if (f[4] > 10)
    {
        cout << f[4] << " - " << endl;
    }
    if (f[0] < 10)
    {
        cout << f[0] << " = " << endl;
    }
    else if (f[1] < 10)
    {
        cout << f[1] << " = " << endl;
    }
    else if (f[2] < 10)
    {
        cout << f[2] << " = " << endl;
    }
    else if (f[3] < 10)
    {
        cout << f[3] << " = " << endl;
    }
    else if (f[4] < 10)
    {
        cout << f[4] << " = " << endl;
    }
}

/*
void Utaalt(int fe[])
{

}
*/

/*
void uTaalt(int fv[])
{
    int hbo;
    for (hbo = 0 ; hbo < 10 ; hbo++)
    {
        if (fv[] > 10)
        {
            cout << " + = + +  " << fv[hbo] << endl;
        }
        else if (fv[] < 10)
        {
            cout << " - = - -  " << fv[hbo] << endl;
        }
    }
}

*/

void UTAalt(int fk[5])
{
    int rswe;
    for (rswe = 0 ; rswe < 6 ; rswe++)
    {
        if (fk[rswe] > 10)
        {
            cout << " %% 10 %%  " << fk[rswe] << endl;
        }
    }
    int ssxz;
    for (ssxz = 0 ; ssxz < 6 ; ssxz++)
    {
        if (fk[ssxz] < 10)
        {
            cout << " %% -10 %%%  " << fk[ssxz] << endl;
        }
    }
}

int main()
{
    /*
    int f[5];
    int e;
    for (e = 0 ; e < 5 ; e++)
    {
        cout << "enter members -  ";
        cin >> f[e];
    }
    if (f[e] > 10)
    {
        cout << f[e] << " - " << endl;
    }
    else if (f[e] < 10)
    {
        cout << f[e] << " = " << endl;
    }
    return 0;
    */
    int ffre[5] = {4 , 11 , 7 , 18 , 40};
    utaalt(ffre);
    UTAalt(ffre);
    //uTaalt(ffre);
    return 0;
}
