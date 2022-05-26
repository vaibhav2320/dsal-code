//This flight pratical
#include <iostream>
using namespace std;
class flight
{
int m[20][20],n,i,j;
char ch;string v[50];
public:
void get_g();
void display_matx();
};
void flight::get_g()
{
cout<<"\nenterno.ofcitiesupto50only:";
cin>>n;
cout<<"\nenternameofcities:\n";
for(i=1;i<=n;i++)
{
cout<<""<<i<<')';
cin>>v[i];
}
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
cout<<"\nifpathispresentbetweencityfrom'''<<v[i]<<'''to'''<<v[j]<<'''thenpressenter'y'
    otherwise 'n':";
cin>>ch;
if(ch=='y'||ch=='Y')
{
cout<<"\nentertimerequiredtoreachcityfrom'"<<v[j]<<"'to'"<<v[i]<<"'inminutes:";
cin>>m[i][j];
}
else if(ch=='n')
{m[i][j]=0;}
else
{cout<<"\nunknownentry";}
}
}
}
void flight::display_matx()
{ cout<<"\n";
for(j=1;j<=n;j++)
{cout<<"\t"<<v[j];}
for(i=1;i<=n;i++)
{
cout<<"\n"<<v[i];
for(j=1;j<=n;j++)
{
cout<<"\t"<<m[i][j];
}
cout<<"\n";
}
}
intmain()
{
intm;
flightf;
while(1)
{
cout<<"\nenteryourchoice";
cout<<"\n1)entergraph";
cout<<"\n2)displayadjacencymatrixforcities";
cout<<"\n3)exit\n";
cout<<"choice:";
cin>>m;
switch(m)
{
case1:f.get_g();
break;
case2:f.display_matx();
break;
case3:exit(0);
default:cout<<"\nWrongEntry";
}
}
return 0;
}
