#include<iostream>
using namespace std;
 
int inputout(char* arry,int size){ /*in put kele*/
    for(int i=0; i<size;i++){
        cin>>arry[i];
    }
}


bool verify(char a[],int size){ 
   char b[3]={'a','v','i'}; /*input la compare karayla sample arry b ghetla*/
   for(int i=0;i<size;)/*doghan sathi loop chalavle*/
   {
    if(a[i]==b[i]){/*jar he arry madhali value equal asel tar
                     te true honar nahitar false return honar*/
        i++;
        return 1;
    }else return 0;

   }


}


int main(){
int size;
char arry[size];
inputout(arry,size);/*avi la input kele charter by character*/
if(verify(arry,size))/*tyala verify karayla pathavle*/
{
    cout<<"its avi";//true value sangnar ki ha avi aahe
}else cout<<"its imposter "; // nahitar imposter aahe

  
 
return 0;
}