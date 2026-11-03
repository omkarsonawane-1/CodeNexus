#include<iostream>
using namespace std;
int binary_search(int a[],int n,int x)
{
    int first,last,mid;
     
    first=0;
    last=n-1;
    
    while(first<=last)
    {
        mid=(first+last)/2;
        if(a[mid]==x) return(mid);
   else if(a[mid]<x) first=mid+1;
                  else last=mid-1;
    }
    return(-1);
}          
int main()
{
    int a[10],x,n;
    cout<<"How many elements:";
    cin>>n;
    cout<<"Enter"<<n<<"Elements";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the element to be searched";
    cin>>x;
    int position=binary_search(a,n,x);
    if(position==-1)cout<<"Element not found";
    else cout<<"Element found at position:"<<position;
    return(0);
} 


/*PS D:\omkar249> cd "d:\omkar249\" ; if ($?) { g++ binary_search.cpp -o binary_search } ; if ($?) { .\binary_search }
How many elements:5
Enter5Elements5 1 7 98 9
Enter the element to be searched7
Element found at position:2
PS D:\omkar249> */
