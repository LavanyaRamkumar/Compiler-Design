#include <stdio.h>
#define max 24
int a=1+4;
int main()
{
	
	int a;
	if(1)
	{
		float b=0.9,c;
		b+=0;
		if(1)
		{
			char c=0;
			int d=0;
			
		}
		if(1)
		{
			int k=0;
		}
		if(1)
		{
			while(1)
			{
				int k=0;
			}
			int k=0;
		}
	}
}
Valid
ST 0:
parent: -1
Variables stored:
id	name	type	ln no.	val	used at

2	a	int	3	4	

ST 1:
parent: 0
Variables stored:
id	name	type	ln no.	val	used at
3	a	int	7	0	

ST 2:
parent: 1
Variables stored:
id	name	type	ln no.	val	used at
4	b	float	10	0.900000	11 
5	c	float	10	0.000000	

ST 3:
parent: 2
Variables stored:
id	name	type	ln no.	val	used at

7	d	int	15	0	

ST 4:
parent: 2
Variables stored:
id	name	type	ln no.	val	used at
8	k	int	20	0	

ST 5:
parent: 2
Variables stored:
id	name	type	ln no.	val	used at
10	k	int	28	0	

ST 6:
parent: 5
Variables stored:
id	name	type	ln no.	val	used at
9	k	int	26	0	28 

