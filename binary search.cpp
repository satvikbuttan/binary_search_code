#include <iostream>
using namespace std;
int binarySearch(int arr[], int ele, int l, int h)
{
    while(l<=h)
        {
            int mid=(l+h)/2;
            if (arr[mid]== ele)
                {
                    return mid;
                }
                if (arr[mid]<ele)
                    {
                        l=mid+1;
                    }
                else
                    {
                        h=mid-1;
                    }
        }

  return -1;
}
int main()
{
  int arr[]={12,15,21,54,63,78,81};
  int ele;
  cout<<"Enter an element to search: ";
  cin>>ele;
  int len=sizeof(arr)/sizeof(arr[0]);
  int ans=binarySearch(arr,ele,0,len-1);
  if (ans==-1)
  {
      cout<<"Element not found";
  }
  else
  {
      cout<<"Element found at: "<<ans;
  }
}
