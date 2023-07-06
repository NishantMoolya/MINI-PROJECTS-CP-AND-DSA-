#include<iostream>
#include<string>
using namespace std;
//String Encoding Recursive function
int encode(char *str,int num)
{
    if(*str != '\0')
    {
      *str = *str+num;
      if(*str > 'Z' && *str < 'a' || *str > 'z')
      {
        *str = *str-26;
      }
      encode(str+1,num);
    }
}
//String Decoding Recursive function
int decode(char *str,int num)
{
    if(*str != '\0')
    {
        *str = *str-num;
        if(*str < 'a' && *str > 'Z' || *str < 'A')
        {
            *str = *str+26;
        }
        decode(str+1,num);
    }
}
//Main function
int main()
{
    int key,num;
    char str[20];
    cout<<"Enter the string:"<<endl;//Strimg Input
    gets(str);
    cout<<"Enter the leaping number:"<<endl;//Leaping Input
    cin>>num;
    cout<<"Enter the choice Encode(1) Or Decode(2):"<<endl;
    cin>>key;
    switch(key)//choice Making based on input
    {
      case 1: encode(str,num);//1 for Encoding
              puts(str);
              cout<<endl;
              break;
      case 2: decode(str,num);//2 for Decoding
              puts(str);
              cout<<endl;
              break;
      default: cout<<"Error!...Enter right input 1 Or 2"<<endl;
               break;
    }
    return 0;
}