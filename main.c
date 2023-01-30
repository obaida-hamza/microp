#include <MKL24Z4.h>
#include <stdio.h>
digitalout a(PTD0);
digitalout b(PTD1);
digitalout c(PTD2);
digitalout d(PTD3);
digitalout e(PTD4);
digitalout f(PTD5);
digitalout g(PTD6);
digitalout dp(PTD7);
digitalin green_button(PTA7);
digitalin red_button(PTA1);

int main()
	{
		int green_button ;
		int red_button ;
		int a,b,c,d,e,f,g;
		int i;
		while(i<9)
		{
			if (i < 8&& green_button ==1)
			{
				i = i+1;	
			}
			else if (i >= 8&& green_button ==1)
			{
				i = 0;	
			}
			else if (i >= 8&& red_button ==1)
			{
				i = i-1;	
			}
			else if (i <= 0&& red_button ==1)
			{
				i = 8;
			}
			switch (i)
			{
				case 0:
				a == high ;
				b == high ;
				c == high ;
				d == high ;
				e == high  ;
				f == high ;
				g == low ;
				d == high ;
				break;
				
				case 1 :
				a == low;
				b == high;
				c == high;
				d == low;	
				e == low;	
				f == low;
				g == low;
				p == low;
				break;
				case 2 :
				a == high;
				b == high;
				c == low;
				d == high;
				e == high;
				f == low;
				g == high;
				h == high;
				d == high;
				break;
				case 3 :
				a == high;
				b == high;
				c == high;
				d == high;
				e == low;
				f == low;
				g == high;
				d == high;
				break;
				case 4:
				a == low ;
				b == high ;
				c == high ;
				d == low;
				e == low;
				f == high;
				g == high ; 
				break;
				case 5:
				a == high;
				b == low;
				c == high;
				d == high;
				e == low;
				f == high;
				g == high;
				d == high;
				break;
				case 6:
				a == high ;
				b == low ;
				c == high ;
				d == high ;
				e == high ;
				f == high ;
				g == high ;
				d == high ;
				break;
				case 7:
				a == high ;
				b == high ;
				c == high ;
				d == low  ;
				e == low  ;
				f == low  ;
				g == low  ;
				d == low  ;
				break;
				case 6:
				a == high ;
				b == low ;
				c == high ;
				d == high ;
				e == high ;
				f == high ;
				g == high ;
				d == high ;
				break;
				case 7:
				a == high ;
				b == high ;
				c == high ;
				d == low  ;
				e == low  ;
				f == low  ;
				g == low  ;
				d == low  ;
				break;
				case 8:
				a == high ;
				b == high ;
				c == high ;
				d == high ;
				e == high ;
				f == high ;
				g == high ;
				d == high ;
				break;
				
			}
		}
	}
