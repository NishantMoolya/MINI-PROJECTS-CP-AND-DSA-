#include<iostream>
#include<time.h>
#include<string.h>
#include<algorithm>
using namespace std;
int main(){
     //Declaration of charcters used in password 
     const string small ="abcdefghijklmnopqrstuvwxyz";
     const string caps = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
     const string numb = "0123456789";
     const string spl = "!@#$%^&*()_+{}?<>:;,.=-+";

     int num,capnum,smallnum,splnum,i; //Input variables for type of character in password

     string password; //Final password

     srand(time(0)); //Random seed changer
     cout<<"Enter the number of capital letters: ";
     cin>>capnum;
     cout<<endl;
     cout<<"Enter the number of small letters: ";
     cin>>smallnum;
     cout<<endl;
     cout<<"Enter the number of numeric characters: ";
     cin>>num;
     cout<<endl;
     cout<<"Enter the number of special characters: ";
     cin>>splnum;
     cout<<endl;
  
     //Making combination as per given inputs 
     for(i=0;i<capnum;i++)
     {
       password += caps[(rand()%caps.length())];
     };
      for(i=0;i<smallnum;i++)
     {
       password += small[(rand()%small.length())];
     };
      for(i=0;i<splnum;i++)
     {
       password += spl[(rand()%spl.length())]; 
     };

     for(i=0;i<num;i++)
     {
       password += numb[(rand()%numb.length())];
     };
     
     //Randomizing the characters of password
     sort(password.begin(),password.end());
     partition(password.begin(),password.end(),[](int x){return x%2 != 0;});
     cout<<"The password generated is: "<<password<<endl; //Resultant password
    return 0;
}