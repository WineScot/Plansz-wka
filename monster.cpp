#include "monster.h"

using namespace std;

Monster::Monster()
{

}

void init( string path, string *tab )
{
    string s;
    fstream plik( path.c_str(), ios::in );
    while( getline( plik, s ) )
    {
        *tab = s;
        tab++;
    }
}
