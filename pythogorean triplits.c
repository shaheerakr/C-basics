#include<stdio.h>
#include<math.h>

int main()
{
	float i,j,k;
	int kin,iin;
	for(i=0;i<=30;i+=1)
	{
		for(j=0;j<=30;j+=1)
		{
			if(i==0||j==0) continue;
			k=sqrt((i*i)+(j*j));
			kin=(int)k;
			iin=(int)i;
			if(kin-k==0&&k<=30)
			{
				if((k*k)-(j*j)==(i*i))
				{
					if(iin%2!=0&&kin%2!=0)
					{
						if(k==j+1)
						{
							if(j==((i*i)-1)/2) printf("%.0f,%.0f,%.0f\n",i,j,k);
						}
					}
				}
			}
		}
	}
}
