#include<iostream>

#include<conio.h>

#include<stdlib.h>

#include<conio.h>

using namespace std;

int main()

{

    system("CLS");

   

      cout<<"enter the value of which you want factorial\n";

      int fact;

      int factresult=1;

      cin>>fact;//5

      for(int i=fact;i>0;i--)

      {

          factresult=factresult*i;

      }

      cout<<factresult;

    getch();

    return 0;

}  