#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int arr[]={38,27,43,3,9,82,10};
    int n=7,temp[n];
    for(int size=1;size<n;size*=2){
        for(int start=0;start<n;start+=2*size){
            int mid=min(start+size,n),end=min(start+2*size,n);
            int i=start,j=mid,k=start;
            while(i<mid && j<end){
                if(arr[i]<=arr[j]) temp[k++]=arr[i++];
                else temp[k++]=arr[j++];
            }

            while(i<mid) temp[k++]=arr[i++];
            while(j<end) temp[k++]=arr[j++];

            for(int x=start;x<end;x++) arr[x]=temp[x];
        }
    }
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    return 0;
}