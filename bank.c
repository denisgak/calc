#include <stdio.h>

int main()
{

int day,money,result,check;
printf("Enter date and money");
check=scanf("%d %d",&day,&money);
if((check)&&(day>=0)&&(day<=365)&&(money>=10000)){
printf("error");}
else
{
	if(day<=30){
		result=money*0.9;}
	else
	{
		if(day<121){
			if(money<100000){
				result=money*1.02;
				}
			else
			{
				result=money*1.03;
				}
			}
		else
		{
			if(day<241){
				if(money<100000){
					result=money*1.06;
					}
				else
				{
					result=money*1.08;
					}
				}
			else
			{
				if(day<366){
					if(money<100000){
						result=money*1.12;
						}
					else
						{
						result=money*1.15;
						}
				}
			}
		}
	}
	printf("\nAfter %d your cashback will:%d",day,result);
}
return 0;
}					