#include <iostream>
using namespace std;

int main() {
      int n;
     cin>>n;
     int a[n];
     int e=0,o=0;
     for(int i=0;i<n;i++){
          cin>>a[i];
          if(a[i]%2==0){
          e=e+a[i];
     }
     else{
          o=o+a[i];
     }
          
     }
     if(o>=e){
          cout<<"NOT READY"<<"\n";
     }
     else if(e>o){
          cout<<"READY FOR BATTLE\n";
     }
     
	// your code goes here
	return 0;
}
