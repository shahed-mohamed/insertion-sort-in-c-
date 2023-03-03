#include <iostream>

using namespace std;
template<typename T>
void inseration_sort(T *arr, int Size)
{
    for(int i=0;i<Size;i++)
        for(int j=i;j>0;j--)
    {
        if(arr[j]<arr[j-1])
        {
            swap(arr[j],arr[j-1]);
        }
        else{
            break;}
    }
}
int main()
{
   int x;
   cin>>x;
   int *arr=new int[x];

    for(int i=0;i<x;i++)
        cin>>arr[i];

    inseration_sort(arr,x);

for(int i=0;i<x;i++)
        cout<<arr[i]<<endl;

    return 0;
}
