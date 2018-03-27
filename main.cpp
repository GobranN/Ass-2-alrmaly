#include <iostream>


using namespace std;

int main()
{
    string text   , text2 ="";


    bool isIncrement = true ;

    int key , a =0  , b = 0  ;

    getline(cin , text) ;

    cin >> key ;


    // remove space

    for(int i =0 ; i < text.length() ; ++i)
    {
        if(text[i]!=' ')
        {
            text2 += text[i];
        }
    }

   // cout << text2 ;
    char M [key][text2.length()];

    for(int i=0 ; i<key ; ++i)
    {
        for(int j=0 ; j<text2.length() ; ++j)
        {
            M[i][j] = '.';
        }
    }

    for(int i =0 ; i < text2.length() ; ++i)
    {
        cout << " a = " << a << "  , b = " << b << endl ;
        M[a][b] = text2[i];

         if(a==0)
        {
            isIncrement = true;
        }

        else if (a==key-1)
        {
            isIncrement = false ;
        }

        if(a>=0 && a<key-1 && isIncrement == true)
        {
            a++;
        }

        else if(a<=key-1 && a>0 &&  isIncrement == false )
        {

            a--;
        }



        b++;

    }


    for(int i=0 ; i<key ; ++i)
    {
        for(int j=0 ; j<text2.length() ; ++j)
        {
            cout << M[i][j] << " " ;
        }

        cout <<endl ;
    }


    return 0;
}
