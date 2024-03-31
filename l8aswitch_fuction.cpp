 #include<iostream>
 using namespace std;
 int main(){

   cout<<"enter two numbers to calculate "<<endl;
   int n,a,b;
   cin>>a>>b;
   cout<<"choose numbers accordingly"<<endl<<"1 - sum"<<endl<<"2 - product"<<endl<<"3 - divide"<<endl<<"4 - subtract"<<endl;
   cin>>n;
   switch(n){
case 1:{cout<<a+b;}break;
case 2:{cout<<a*b;}break;
case 3:{cout<<a/b;}break;
case 4:{cout<<a-b;}break;
default: cout<<"you entered wrong input please enter number beteen 1-4";
   }
 }