#include <iostream>
#include <string>
using namespace std;
int main() {
string password;
int displacement;
cout<<"請輸入密碼:";
cin>>password;
cout<<"加密的位數:";
cin>> displacement;
int len = password.length();

for (int i=0; i< len; i++){
  password[i]=password[i]+displacement;
  if(password[i]< 122 &&password[i]> 97){
    cout<<password[i];
  }
  else if (password[i]>122){
   password [i]=password[i]-26;
   cout<<password[i];
  }
  else if (password[i]<90 && password[i]> 65){
    cout<<password[i];
  }
  else if (password[i]>90){
    password[i]=password[i]-26;
    cout<<password[i];
  }
  else {
    password[i]=password[i]-displacement;
    cout<<password[i];
  } 
 }
}
