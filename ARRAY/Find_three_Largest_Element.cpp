#include <iostream>
using namespace std;


int main()
{

int arr[7]={1,2,3,4,5,1,2};

int size=sizeof(arr) / sizeof(arr[0]);


int first=arr[0];
int second=arr[0];
int third=arr[0];

for(int i=0;i<size;i++){
    
    if(arr[i]>first){
        third=second;
        second=first;
        first=arr[i];
    }
    else if(arr[i] > second && arr[i] !=first){
        third=second;
        second=arr[i];
    }
    else if(arr[i] > third){
        third=arr[i];
    }
    
    
}
cout<<first<<" "<<second<<" "<<third<<endl;
    
    return 0;
}
