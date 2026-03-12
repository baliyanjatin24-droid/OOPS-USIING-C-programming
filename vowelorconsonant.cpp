#include<iostream>
using namespace std;
int main()
{
char input;
cout<<"Enter any alphabet: ";
cin>>input;

if
(input=='a'||input=='e'||input=='i'||input=='o'||input=='u'||input=='A'||input=='E'||input=='I'||input=='O'||input=='U')
cout<<input <<" is a vowel";
    
else
cout<<input <<" is a consonant";
return 0;
}
