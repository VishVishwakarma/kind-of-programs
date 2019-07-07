#include<bits/stdc++.h>
using namespace std;

void Merge(int ar[],int le[],int lleft, int ri[], int lright){

    int i=0;
    int j=0;
    int k=0;

    while(i < lleft && j < lright){

        if(le[i] < ri[j]){

            ar[k]=le[i];
            i++;
        }else{
            ar[k]=ri[j];
            j++;
        }
        k++;
    }
    while(i<lleft){
        ar[k]=le[i];
        k++;
        i++;
    }
    while(j<lright){
        ar[k]=ri[j];
        k++;
        j++;
    }

}

void Mergesort(int arr[], int len){

    if(len<2)
        return;

    int mid;
    mid=len/2;

    int left[mid],right[len-mid],i;

    for(i=0;i<mid;i++)
        left[i]=arr[i];

    for(i=mid;i<len;i++)
        right[i-mid]=arr[i];

    Mergesort(left,mid);
    Mergesort(right,len-mid);

    Merge(arr,left,mid,right,len-mid);


}

int main(){
    int a[10]={2,6,5,3,1,4,7,8,10,9};
    int l,i;
    l=sizeof(a)/sizeof(a[0]);

    Mergesort(a,l);

    for(i=0;i<l;i++)
        cout<<a[i]<<" ";
    cout<<endl;
}
