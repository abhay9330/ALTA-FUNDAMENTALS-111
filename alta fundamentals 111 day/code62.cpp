#include <iostream>
using namespace std;
int c=0;
void merge(int a[],int l,int m,int r){
    int i=l,j=m+1,k=0,t[100];
    while(i<=m && j<=r){
        if(a[i]<=a[j]) t[k++]=a[i++];
        else {t[k++]=a[j++]; c+=m-i+1;}
    }
    while(i<=m) t[k++]=a[i++];
    while(j<=r) t[k++]=a[j++];
    for(i=l,k=0;i<=r;i++) a[i]=t[k++];
}
void sort(int a[],int l,int r){
    if(l<r){
        int m=(l+r)/2;
        sort(a,l,m);
        sort(a,m+1,r);
        merge(a,l,m,r);
    }
}
int main(){
    int a[]={8,4,2,1};
    sort(a,0,3);
    cout<<c;
    return 0;
}