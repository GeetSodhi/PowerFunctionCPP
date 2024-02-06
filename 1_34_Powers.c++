#include<iostream>
using namespace std;
int power(){
    int a;
cout<<"enter a"<<endl;
cin>>a;
int n;
cout<<"enter n" <<endl;
cin>>n;
    int ans=1;
for (int i = 1; i <=n; i++)

{
    ans=ans*a;

    /* code */ 
}
return ans;
}
int main(){

int res=power();
cout<<"Result is : "<<res<<endl;


return 0;
}