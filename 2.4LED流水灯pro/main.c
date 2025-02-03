#include <REGX52.H>
#include <INTRINS.H>
void Delay1ms(unsigned int xms)	//@11.0592MHz
{
	unsigned char data i, j;
	while(xms)
	{
		_nop_();
	i = 2;
	j = 199;
	do
	{
		while (--j);
	} while (--i);
		xms--;
	}
	
}

void main()
{
	while(1)
	{
		P2=0xFE;//d1 light
		Delay1ms(500);
		P2=0xFD;//d2 light
		Delay1ms(500);
		P2=0xFB;//d1 light
		Delay1ms(500);
		P2=0xF7;//d2 light
		Delay1ms(500);
		P2=0xEF;//d1 light
		Delay1ms(500);
		P2=0xDF;//d2 light
		Delay1ms(500);
		P2=0xBF;//d1 light
		Delay1ms(500);
		P2=0x7F;//d2 light
		Delay1ms(500);
	}
}