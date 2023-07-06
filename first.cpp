#include<iostream>
#include<string>
using namespace std;
int encode(char *str,int num)
{
    if(*str != '\0')
    {
      *str = *str+num;
      encode(str+1,num);
    }
}
int decode(char *str,int num)
{
    if(*str != '\0')
    {
        *str = *str-num;
        decode(str+1,num);
    }
}
int main()
{
    int key,num;
    char str[20];
    cout<<"Enter the string:"<<endl;
    gets(str);
    cout<<"Enter the leaping number:"<<endl;
    cin>>num;
    cout<<"Enter the choice Encode(1) Or Decode(2):"<<endl;
    cin>>key;
    switch(key)
    {
      case 1: encode(str,num);
              puts(str);
              cout<<endl;
              break;
      case 2: decode(str,num);
              puts(str);
              cout<<endl;
              break;
      default: cout<<"Error!...Enter right input 1 Or 2"<<endl;
               break;
    }
    return 0;
}