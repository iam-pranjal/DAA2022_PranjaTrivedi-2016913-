//Given a sorted array of posituve integer containing few duplicate elements. DAA and implement it using a program whether the given keys present in an array or not. If it is present find out the number of copies of given key.
#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int count=0;
    int k;
    
    int flag=0;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    cin>>k;
    for(int i=0; i<n; i++)
    {
        
        if(k==arr[i])
        {
            count++;
            flag=1;
        }
    }
    if(flag==1)
    {
       cout<<"The no of elements: "<<count; 
    }
    
    return 0;
}
