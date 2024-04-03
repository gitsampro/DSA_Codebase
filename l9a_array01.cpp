#include<iostream>
using namespace std;
void arr(int arr[],int size){
    for(int i=0;i<size;i++){
   cout<<arr[i]<<" ";
    }
}
void arr1(char arr[],int size){
    for(int i=0;i<size;i++){
   cout<<arr[i]<<" ";
    }
}
int main(){
    int raj[10]={0,1,2};
    arr(raj,10);cout<<endl;
    char shera[20]={'a'};
    arr1(shera,20);
   
}//leraned how to access the elements of array