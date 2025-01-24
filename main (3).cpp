#include<iostream>
#include<string.h>
using namespace std;

void strremove(char input[]){
    int l=strlen(input);
    if(l==0)
    return;
   if(input[0]=='x'){
       for(int i=0;i<l;i++)
       input[i]=input[i+1];
     strremove(input);
   }
   else{
      strremove(input+1);
   }
}

int main(){
    char s[100];
    cout<<"Enter the text"<<endl;
    cin>>s;
    strremove(s);
    cout<<s<<endl;
    return 0;
}