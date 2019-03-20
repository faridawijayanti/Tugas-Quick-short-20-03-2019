#include <iostream>
#include <conio.h>
using namespace std;
void quick_sort(int simpan[], int kiri, int kanan)
{
    int i = kiri, j = kanan;int tmp;
    int hasil_bagi = simpan[(kiri+kanan)/2];/* partition */
    while (i<j)
        {
            while (simpan[i] < hasil_bagi)
            i++;
            while (simpan[j] > hasil_bagi)
            j--;
    if (i<=j)
        {
            tmp = simpan[i];
            simpan[i] = simpan[j];
            simpan[j] = tmp;
            i++;
            j--;
        }
        }/* recursion */
    if (kiri < j)
            quick_sort(simpan, kiri, j);
    if (i < kanan)
            quick_sort(simpan, i, kanan);
}
int main()
{
    int i,n,data[50];
    cout<<"------------------------\n";
    cout<<"PROGRAM QUICK SHORT    |\n";
    cout<<"-----------------------+\n";
    cout<<"FARIDA WIJAYANTI       |\n";
    cout<<"18050623012            |\n";
    cout<<"------------------------\n";
    cout<<endl;
    cout<<"Masukan banyak data: ";
    cin>>n;
    cout<<endl<<endl;
    for(i=0;i<n;i++)
    {
        cout<<"Masukan data ke- "<<i+1<<" = ";cin>>data[i];
    }
    cout<<"\nData sebelum diurutkan: "<<endl;
    for(i=0;i<n;i++)
    {
        cout<<data[i]<<" ";
    }
    cout<<"\n";

    quick_sort(data,0,n-1);//hasil pengurutan
    cout<<"\nHasil pengurutan:\n";
        {
            int i;
            for (i=0;i<n;i++)
            cout<<data[i]<<" ";
            cout<<"\n";
        }
    getch();
}

