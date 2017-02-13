#include <stdio.h>

int main()
{

int day,money,result,check;
check=scanf("%d %d",&d,&m);
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
						result=money*1.06;
						}
					else
						{
						result=money*1.08;
						}
				}
			}
		}
	}
}					