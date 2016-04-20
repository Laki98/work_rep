#include "alpha.h"

int alpha::n=0;

alpha::alpha()
{
    if(n==0) cout<<"First object has been created"<<endl;
    n++;
}

alpha::~alpha()
{
    n--;
    if(n==0)cout<<"Last element has been deleted"<<endl;
}
