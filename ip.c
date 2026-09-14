#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void ip();

int main()
{long int ipoctets[4];
long int subnet[4];
int l=0;
int check=0;
int sum=0;
int stop=0;
int slash=0;
printf("what is your ip address?\n");
for(int i=0; i<=3; i++)
{scanf("%d.", &ipoctets[i]);}
while(l<=3)
{long int octetcheck=ipoctets[l];
if(octetcheck>255)
{printf("octet %d is invald, please re-state your ip address (octet can not be over 255)\n", l+1);
for(int i=0; i<=3; i++)
{scanf("%d.", &ipoctets[i]);}
l=0;}else{l++;}}


printf("what is your subnet?\n");
for(int i=0; i<=3; i++)
{scanf("%d.", &subnet[i]);}

while(check<=3)
{int sum=0;
long int subnetcheck=subnet[check];
if
(subnetcheck>255)
{printf("octet %d is invald, please re-state your ip address\n", check+1);
check=0; for(int i=0; i<=3; i++)
{scanf("%d.", &subnet[i]);}}
 
else if(1)
{  for(int k=7; k>=0; k--)
{sum+=pow(2, k);
    if(subnetcheck>=sum)
    {slash++;}
   
    if(sum==255&&subnetcheck==sum&&stop==0)
    {check++; break;}
    else if((sum==subnetcheck&&stop==0)||(subnetcheck==0&&stop==0))
    {stop++; check++; break;}
    else if((stop==1&&subnetcheck!=0)||(sum!=subnetcheck&&k==0&&subnetcheck!=0))
{{printf("2octet %d is invald, please re-state your subnet address\n", check+1);
check=0; slash=0; stop=0;
for(int i=0; i<=3; i++)
{scanf("%d.", &subnet[i]);}break;}}
}}
if(subnetcheck==0&&stop!=0)
{check++;}



}

printf("Your IP address is ");
for(int i=0; i<4; i++)
{if(i<3)
{printf("%d.", ipoctets[i]);}
if(i==3)
{printf("%d\n", ipoctets[i]);}}


printf("Your Subnet is ");
for(int i=0; i<4; i++)
{if(i<3)
{printf("%d.", subnet[i]);}
if(i==3)
{printf("%d/%d", subnet[i], slash);}}


return 0;
}


