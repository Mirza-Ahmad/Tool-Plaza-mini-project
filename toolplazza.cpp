#include<iostream>
/*created by mirza ahmad usman jani stduent*/
using namespace std;
class ToolPath
{
private:
int pay;
int non_pay;
public:
ToolPath(int n=0, int t=0)
{	
pay=n;
non_pay=t;	
}	
void pa()
{
int u;
non_pay;
cout<<"\t\t\tEnter the amonut to pay toll for car:";
cin>>u;
pay=pay+u;	
}
void paymotorcyle()
{
int e;
non_pay;
cout<<"\t\t\tEnter the amount to pay toll for motorcyle:";
cin>>e;
pay=pay+e;
}
void paybus()
{
int q;
non_pay;
cout<<"\t\t\tEnter the amount to pay toll for bus:";
cin>>q;
pay=pay+q;
}
void displaybus()
{
cout<<"\t\tThe total number of bus passed from toll plazza = "<<non_pay<<endl;
cout<<"\t\tThe total toll collected of bus from toll plazza = "<<pay<<endl;
}
void paytruck()
{
int u;
non_pay;
cout<<"\t\t\tEnter the amount to pay toll for truck:";
cin>>u;
pay=pay+u;
}
void displaytruck()
{
cout<<"\t\tThe total number of truck passed from toll plazza = "<<non_pay<<endl;
cout<<"\t\tThe total toll collected of truck from plazza = "<<pay<<endl;
}
void nopay()
{
non_pay;
}
void displaycar()
{
cout<<"\t\tThe total number of car passed from toll plazza = "<<non_pay<<endl;
cout<<"\t\tThe total toll collected of car from toll plazza = "<<pay<<endl;
}	
void displaymotor()
{
cout<<"\t\tThe total number of motorcyle passed from toll plazza = "<<non_pay<<endl;
cout<<"\t\tThe total toll collected of motorcyle from toll plazza = "<<pay<<endl;
}
};
int main(void)
{
int u,i,j;
char ch='y',k[30];
system("COLOR E");
cout<<"\n...........................WELCOME TO LAHORE TOOL PLAZZA.......................\n"<<endl;
cout<<"\n\t\t\tEnter the total number of vehicle passed:";
cin>>u;
cout<<"\t\t\tEnter the total toll collected:";
cin>>i;
ToolPath b(u,i);
fflush(stdin);
cout<<"\t\t\tEnter the vehicle type:"<<endl;
cin.getline(k,30);
cout<<"\t\t\tpress 1: for paying cars "<<endl; 
cout<<"\t\t\tpress 2: for non paying cars "<<endl;
cout<<"\t\t\tpress 3: for paying motorcyle "<<endl;
cout<<"\t\t\tpress 4: for non-paying motorcyle "<<endl;
cout<<"\t\t\tpress 5: for paying truck"<<endl;
cout<<"\t\t\tpress 6: for non-paying truck"<<endl;
cout<<"\t\t\tpress 7: for paying bus"<<endl;
cout<<"\t\t\tpress 8: for non-paying bus"<<endl;
cin>>j;
if(j==1 && k)
{
b.pa();	
b.displaycar();
}
if(j==2 && k)
{
b.nopay();
b.displaycar();
}
if(j==3 && k)
{
b.paymotorcyle();
b.displaymotor();
}
if(j==4 && k)
{
b.nopay();
b.displaymotor();
}
if(j==5 && k)
{
b.paytruck();
b.displaytruck();
}
if(j==6 && k)
{
b.nopay();
b.displaytruck();	
}
if(j==7 && k)
{
b.paybus();
b.displaybus();
}
if(j==8 && k)
{
b.nopay();
b.displaybus();
}
return 0;
}
