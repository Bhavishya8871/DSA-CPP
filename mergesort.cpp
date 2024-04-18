//merge sort
#include<iostream>
using namespace std;

void merge(int arr[],int s ,int e){
    //mid denge phele kyuki apn ko  uski lenght nikalni hai
    int mid=s+(e-s)/2;
    
    //lenght nikali apn ne itne ki apn nayi memory lenge
    int lenleft=mid-s+1;
    int lenright=e-mid;

    //abb apn naye arry banayenge in heap memory
    int *left=new int[lenleft];
    int *right=new int[lenright];

    //copy krenge value from the main araay
    //k is starting index of the value from the main array
    int k=s;
    for(int i=0;i<lenleft;i++){
        left[i]=arr[k];
        k++;
    }
    //coping value in right array

    k=mid+1;
    for(int i=0;i<lenright;i++){
        right[i]=arr[k];
        k++;
    }

    //aab jo aray banayi hai usse apan merge krenge 
    int leftindex=0;
    int rightindex=0;
    int mainkaindex=s;
    //isme mein glti kunga toh yaad se main ka index bhi call krdenge

    while(leftindex<lenleft&&rightindex<lenright){
        if(left[leftindex]<right[rightindex]){
            arr[mainkaindex]=left[leftindex];
            mainkaindex++;
            leftindex++;
        }
        if(right[rightindex]<left[leftindex]){
            arr[mainkaindex]=right[rightindex];
            mainkaindex++;
            right[rightindex];
        }

    }
    //2 or case banenge ki agar left pura aagya or right mein element bache hai toh apan yrh krenge

    while(rightindex<lenright){
        arr[mainkaindex]=right[rightindex];
        mainkaindex++;
        rightindex++;
    }
    //agar right aagya or left miein e;ement hai toh

    while(leftindex<lenleft){
        arr[mainkaindex]=left[leftindex];
        mainkaindex++;
        leftindex++;
    }

    //aab memory bani thi toh delte bhi krni hogi
    //yahi ek sache coder ki phechan hai
    delete[] left;
    delete[] right;

}

void mergeSort(int arr[],int s,int e){
    //base case
    if(s>=e){
        return;
    }
    // merge sort ko phele break kro fhir usko recursive call latgao fhir merge kro
    //break krenge
    int mid=s+(e-s)/2;

    //recursive call for left array
    mergeSort(arr,s,mid);
    //recursive call for right array
    mergeSort(arr,mid+1,e);
    //aab merge krenge
    merge(arr,s,e);
    
}

int main(){
    int arr[]={2,1,6,9,4,3};
    int size=6;
    int s=0;
    int e=size-1;
    cout<<"before  merge sort array is";
    cout<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    mergeSort(arr,s,e);

    cout<<"after merge sort";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}