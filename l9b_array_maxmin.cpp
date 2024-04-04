#include<iostream>
using namespace std;
void getmax(int arr[],int size){
    int max=INT16_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]>max){ max=arr[i];}
     
      
    }
    cout<<"max value is"<<max;  

}

void getmin(int arr[],int size){
int min=INT_FAST16_MAX;
for(int i=0;i<size;i++){
    if(arr[i]>min){ min=arr[i];}


}
cout<<min;
}
int main()
{
    int n;
    cout<<"enter size of array";

    cin>>n;
    int num[20]={0};
    cout<<"now enter the elements in array"<<endl;
    for(int i=0;i<n;i++){
        cin>>num[i];
    }
    getmin(num,20);
}