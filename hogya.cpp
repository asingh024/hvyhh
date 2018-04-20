#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;
void mobile();                       //Function declarations
void apple();
void watch();
void htc();

int main()
{
   char n;
   do
   	 {  
   	   cout<<"                          ******PROGRAM FOR GADGET TECHIQUE*******"<<endl;
   	   cout<<"                          *****      choose your brand      *****"<<endl;
       cout<<" \n           1. Enter a to  samsung mobile \n           2. Enter b to iphone \n           3. Enter c to watch\n       4. Enter d to htch phn\n"<<endl;
       cin>>n;
       if(n=='a' || n=='A')
       {
           mobile();
       }
       else if(n=='b' || n=='B')
       {
           apple();
       }
       else if(n=='c' || n=='C')
       {
           watch();
       }
       else if(n=='d' || n=='D')
       {
           htc();
       }
         else
       {
           cout<<"Wrong choice"<<endl;
       }
       cout<<"\npress any number to EXIT\n"<<endl;
       cout<<"enter y to continue..."<<endl;
       cin>>n;
   }while(n=='y');
}
void mobile()
{
   char n;
   do
   	 { 
   	   cout<<"                          *****      SELECT YOUR RANGE      *****"<<endl;
       cout<<" \n           1. Enter a for below 15000 \n           2. Enter b for  above 15000 \n "<<endl;
       cin>>n;
       if(n=='a' || n=='A')
       {
           
cout<<"\nSamung Galaxy J7 Prime"<<endl;
    cout<<"ram = 8GB"<<endl;
    cout<<"internal = 16GB"<<endl;
    cout<<"External upto 16 GB"<<endl;
    cout<<"Front = 5px back =8px"<<endl;
       }
       else if(n=='b' || n=='B')
       {
            cout<<"Samung Galaxy on 7"<<endl;
    cout<<"\nram = 8GB"<<endl;
    cout<<"internal = 16GB"<<endl;
    cout<<"External upto 16 GB"<<endl;
    cout<<"Front = 5px back =8px"<<endl;
       }
         else
       {
           cout<<"\nsoory you choose wrong choice\n"<<endl;
   }
   cout<<"\nselect any key to choose another phone\n "<<endl;
 cout<<"\nenter z to exit...\n"<<endl;
       cin>>n;
   }while(n!='z');
}
void apple()
{
   char n;
   do
   	 { 
   	   cout<<"                          *****      SELECT YOUR RANGE      *****"<<endl;
       cout<<" \n           1. Enter a for below 15000 \n           2. Enter b for  above 15000 \n "<<endl;
       cin>>n;
       if(n=='a' || n=='A')
       {
           
cout<<"\nSamung Galaxy J7 Prime"<<endl;
    cout<<"ram = 8GB"<<endl;
    cout<<"internal = 16GB"<<endl;
    cout<<"External upto 16 GB"<<endl;
    cout<<"Front = 5px back =8px"<<endl;
       }
       else if(n=='b' || n=='B')
       {
            cout<<"\nsammung Galaxy on 7"<<endl;
    cout<<"ram = 8GB"<<endl;
    cout<<"internal = 16GB"<<endl;
    cout<<"External upto 16 GB"<<endl;
    cout<<"Front = 5px back =8px"<<endl;
       }
         else
       {
           cout<<"\nsoory you choose wrong choice"<<endl;
   }
 cout<<"\nenter z to exit..."<<endl;
       cin>>n;
   }while(n!='z');
}
void watch()
{
   char n;
   do
   	 { 
   	   cout<<"                          *****      SELECT YOUR RANGE FOR SMART WATCH     *****"<<endl;
       cout<<" \n           1. Enter a for below 20000 \n           2. Enter b for  above 30000 \n "<<endl;
       cin>>n;
       if(n=='a' || n=='A')
       {
           
cout<<"\nSamung Galaxy Watch"<<endl;
    cout<<"ram = 1GB"<<endl;
    cout<<"internal = 8GB"<<endl;
    cout<<"Water proof"<<endl;
    cout<<"microphone"<<endl;
    cout<<"show your heart beat"<<endl;
       }
       else if(n=='b' || n=='B')
       {
    cout<<"\nApple Smart Watch"<<endl;
    cout<<"ram = 4GB"<<endl;
    cout<<"internal = 16GB"<<endl;
    cout<<"water proof"<<endl;
    cout<<"show tempreature"<<endl;
    cout<<"show heart beat"<<endl;
    cout<<"show pluse rate"<<endl;
       }
         else
       {
           cout<<"\nsoory you choose wrong choice"<<endl;
   }
 cout<<"\nenter z to exit..."<<endl;
       cin>>n;
   }while(n!='z');
}
void htc()
{
   char n;
   do
   	 { 
   	   cout<<"                          *****      SELECT YOUR RANGE      *****"<<endl;
       cout<<" \n           1. Enter a for below 15000 \n           2. Enter b for  above 15000 \n "<<endl;
       cin>>n;
       if(n=='a' || n=='A')
       {
           
cout<<"\nSamung Galaxy J7 Prime"<<endl;
    cout<<"ram = 8GB"<<endl;
    cout<<"internal = 16GB"<<endl;
    cout<<"External upto 16 GB"<<endl;
    cout<<"Front = 5px back =8px"<<endl;
       }
       else if(n=='b' || n=='B')
       {
    cout<<"\nSamung Galaxy on 7"<<endl;
    cout<<"ram = 8GB"<<endl;
    cout<<"internal = 16GB"<<endl;
    cout<<"External upto 16 GB"<<endl;
    cout<<"Front = 5px back =8px"<<endl;
       }
         else
       {
           cout<<"\nsoory you choose wrong choice"<<endl;
   }
 cout<<"\nenter z to exit..."<<endl;
       cin>>n;
   }while(n!='z');
}
