#include <iostream>
#include <cstdio>
using namespace std;
int main(){
    char str[50];
    int i, length=0;

    cout<<"Enter a String : ";
    fgets(str, sizeof(str), stdin);

    for(i=0;str[i]!='\0';i++)
    {
        length++;
    }
    cout<<"Length of the string '"<<str<<"' is : "<<length-1;

    return 0;
}