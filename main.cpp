#include <iostream>
using namespace std;

int main() {
int n, p, i, pes, pos, max, min;
cout << "Quanti elementi devono essere originati?" << endl;
cin >> n;
int v[n];
i=0;
while (i<n)
{
    v[i]= rand() % 1000;
    i=i+1;

}
i=0;
p=0;
while (i<n)
{
   if( v[i]%2=0)
   {
    p=p+1;

   }
   i=i+1;
}
cout << "Sono stati generati " << p << " numeri pari" << endl;
i=0;
while (i<n)
{
    if(i=0)
    {
        min = v[i];

    }
    else
    {
        if(min>v[i])
        {
            min=v[i];
        }
    }
    i=i+1;
}
i=0;
while (i<n)
{
   if(min=v[i])
   {
    pos=i;
   }
   i=i+1;
}
cout << "Il valore più piccolo è " << min << " nella posizione " << pos << endl;
i=0;
while (i<n)
{
    if(i=0)
    {
        max = v[i];

    }
    else
    {
        if(max<v[i])
        {
            max=v[i];
        }
    }
    i=i+1;
}
i=0;
while (i<n)
{
   if(max=v[i])
   {
    pes=i;
   }
   i=i+1;
}
cout << "Il valore più grande è " << max << " nella posizione " << pes << endl;


}


