#include <iostream>
#include <math.h>
using namespace std;

int main()
{ long int n;
cin>>n;
/*a=n/1000000000;
b=n/1000000-a*1000;
c=n/1000-a*1000000-b*1000;

*/ 
int k,l,c,d=n/1000000000;
k=(n%1000000000)/1000000;
l=(n%1000000)/1000;
c=n%1000;
  switch (d/100)
     {
      case 1: cout<<"bir";cout<<" yuz "; break;
      case 2: cout<<"ikki";cout<<" yuz "; break;
      case 3: cout<<"uch";cout<<" yuz "; break;
      case 4: cout<<"to'rt";cout<<" yuz "; break;
      case 5: cout<<"besh"; cout<<" yuz ";break;
      case 6: cout<<"olti"; cout<<" yuz ";break;
      case 7: cout<<"yetti";cout<<" yuz "; break;
      case 8: cout<<"sakkiz";cout<<" yuz "; break;
      case 9: cout<<"to'qqiz";cout<<" yuz "; break;
      case 0: cout<<""; break;
    
     }


switch((((d-d%10)/10)%10))
{
    case 1: cout<<"o'n";cout<<" "; break;
    case 2: cout<<"yigirma";cout<<" "; break;
    case 3: cout<<"o'ttiz";cout<<" ";break;
    case 4: cout<<"qirq"; cout<<" ";break;
    case 5: cout<<"ellik";cout<<" "; break;
    case 6: cout<<"oltmish";cout<<" "; break;
    case 7: cout<<"yetmish";cout<<" "; break;
    case 8: cout<<"sakson"; cout<<" ";break;
    case 9: cout<<"to'qson";cout<<" "; break;
    case 0: cout<<""; break;
 }

  switch (d%10)
     {
      case 1: cout<<"bir"; break;
      case 2: cout<<"ikki"; break;
      case 3: cout<<"uch"; break;
      case 4: cout<<"to'rt"; break;
      case 5: cout<<"besh"; break;
      case 6: cout<<"olti"; break;
      case 7: cout<<"yetti"; break;
      case 8: cout<<"sakkiz"; break;
      case 9: cout<<"to'qqiz"; break;
      case 0: cout<<""; break;
    
}if ((d/100!=0 or (((d-d%10)/10)%10)!=0 )  and d%10==0)
cout<<"milliard ";

else if (d!=0)
cout <<" milliard ";

switch (k/100)
     {
      case 1: cout<<"bir";cout<<" yuz "; break;
      case 2: cout<<"ikki";cout<<" yuz "; break;
      case 3: cout<<"uch";cout<<" yuz "; break;
      case 4: cout<<"to'rt";cout<<" yuz "; break;
      case 5: cout<<"besh"; cout<<" yuz ";break;
      case 6: cout<<"olti"; cout<<" yuz ";break;
      case 7: cout<<"yetti";cout<<" yuz "; break;
      case 8: cout<<"sakkiz";cout<<" yuz "; break;
      case 9: cout<<"to'qqiz";cout<<" yuz "; break;
      case 0: cout<<""; break;
    
     }  
switch((((k-k%10)/10)%10))
{
    case 1: cout<<"o'n";cout<<" "; break;
    case 2: cout<<"yigirma";cout<<" "; break;
    case 3: cout<<"o'ttiz";cout<<" ";break;
    case 4: cout<<"qirq"; cout<<" ";break;
    case 5: cout<<"ellik";cout<<" "; break;
    case 6: cout<<"oltmish";cout<<" "; break;
    case 7: cout<<"yetmish";cout<<" "; break;
    case 8: cout<<"sakson"; cout<<" ";break;
    case 9: cout<<"to'qson";cout<<" "; break;
    case 0: cout<<""; break;
 }
switch (k%10)
     {
      case 1: cout<<"bir"; break;
      case 2: cout<<"ikki"; break;
      case 3: cout<<"uch"; break;
      case 4: cout<<"to'rt"; break;
      case 5: cout<<"besh"; break;
      case 6: cout<<"olti"; break;
      case 7: cout<<"yetti"; break;
      case 8: cout<<"sakkiz"; break;
      case 9: cout<<"to'qqiz"; break;
      case 0: cout<<""; break;
    
} if ((k/100!=0 or (((k-k%10)/10)%10)!=0 ) and k%10==0)
cout<<"million ";

else if (k!=0)
cout<<" million ";
switch (l/100)
     {
      case 1: cout<<"bir";cout<<" yuz "; break;
      case 2: cout<<"ikki";cout<<" yuz "; break;
      case 3: cout<<"uch";cout<<" yuz "; break;
      case 4: cout<<"to'rt";cout<<" yuz "; break;
      case 5: cout<<"besh"; cout<<" yuz ";break;
      case 6: cout<<"olti"; cout<<" yuz ";break;
      case 7: cout<<"yetti";cout<<" yuz "; break;
      case 8: cout<<"sakkiz";cout<<" yuz "; break;
      case 9: cout<<"to'qqiz";cout<<" yuz "; break;
      case 0: cout<<""; break;
    
     }
     switch((((l-l%10)/10)%10))
{
    case 1: cout<<"o'n";cout<<" "; break;
    case 2: cout<<"yigirma";cout<<" "; break;
    case 3: cout<<"o'ttiz";cout<<" ";break;
    case 4: cout<<"qirq"; cout<<" ";break;
    case 5: cout<<"ellik";cout<<" "; break;
    case 6: cout<<"oltmish";cout<<" "; break;
    case 7: cout<<"yetmish";cout<<" "; break;
    case 8: cout<<"sakson"; cout<<" ";break;
    case 9: cout<<"to'qson";cout<<" "; break;
    case 0: cout<<""; break;
 }  switch   (l%10)
 {
      case 1: cout<<"bir"; break;
      case 2: cout<<"ikki"; break;
      case 3: cout<<"uch"; break;
      case 4: cout<<"to'rt"; break;
      case 5: cout<<"besh"; break;
      case 6: cout<<"olti"; break;
      case 7: cout<<"yetti"; break;
      case 8: cout<<"sakkiz"; break;
      case 9: cout<<"to'qqiz"; break;
      case 0: cout<<""; break;
    
     }if ((l/100 !=0 or (((l-l%10)/10)%10)!=0 ) and l%10==0 )
cout<<"ming ";

else if (l!=0 )

cout<<" ming ";

     switch (c/100)
     {
      case 1: cout<<"bir";cout<<" yuz "; break;
      case 2: cout<<"ikki";cout<<" yuz "; break;
      case 3: cout<<"uch";cout<<" yuz "; break;
      case 4: cout<<"to'rt";cout<<" yuz "; break;
      case 5: cout<<"besh"; cout<<" yuz ";break;
      case 6: cout<<"olti"; cout<<" yuz ";break;
      case 7: cout<<"yetti";cout<<" yuz "; break;
      case 8: cout<<"sakkiz";cout<<" yuz "; break;
      case 9: cout<<"to'qqiz";cout<<" yuz "; break;
      case 0: cout<<""; break;
    
     }
switch(((c-c%10)/10)%10)
{
    case 1: cout<<"o'n";cout<<" "; break;
    case 2: cout<<"yigirma";cout<<" "; break;
    case 3: cout<<"o'ttiz";cout<<" ";break;
    case 4: cout<<"qirq"; cout<<" ";break;
    case 5: cout<<"ellik";cout<<" "; break;
    case 6: cout<<"oltmish";cout<<" "; break;
    case 7: cout<<"yetmish";cout<<" "; break;
    case 8: cout<<"sakson"; cout<<" ";break;
    case 9: cout<<"to'qson";cout<<" "; break;
    case 0: cout<<""; break;
 }
  switch (c%10)
     {
      case 1: cout<<"bir"; break;
      case 2: cout<<"ikki"; break;
      case 3: cout<<"uch"; break;
      case 4: cout<<"to'rt"; break;
      case 5: cout<<"besh"; break;
      case 6: cout<<"olti"; break;
      case 7: cout<<"yetti"; break;
      case 8: cout<<"sakkiz"; break;
      case 9: cout<<"to'qqiz"; break;
      case 0: cout<<""; break;
    
}


    return 0;
}
