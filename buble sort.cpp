#include <iostream>

using namespace std;
int main ()
{
    bool tukar;
    int x [100],i=0,j,temp,n;

    cout<<"Masukkan Banyaknya Data = ";
    cin>>n;
    while (i<n)
    {
        cout<<"Data ke- "<<i+1<<"= ";
        cin>>x[i];
        i++;
    }
    tukar = true;
    i=1;
    while (i<n && tukar)
    {
        j=1;
        tukar = false;
        while (j <= (n-1))
        {
            if (x[j-1] > x[j])
            {
                tukar=true;
                temp = x[j-1];
                x[j-1] = x[j];
                x[j] = temp;
            }
            j++;
        }
        i++;
    }
    i = 0;
    cout<<endl<<endl;
    cout<<"Data Yang Urut = ";
    while (i < n)
    {
        cout<<x[i]<<", ";
        i++;
    }
    return 0;
}
