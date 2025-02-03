#include <REGX52.H>
#include <INTRINS.H>

void Delay500ms()		//@11.0592MHz
{
	unsigned char i, j, k;

	_nop_();
	i = 4;
	j = 129;
	k = 119;
	do
	{
		do
		{
			while (--k);
		} while (--j);
	} while (--i);
}

void main()
{
	while(1)
	{
		P2=0xFE;//d1 light
		Delay500ms();
		P2=0xFD;//d2 light
		Delay500ms();
		P2=0xFB;//d1 light
		Delay500ms();
		P2=0xF7;//d2 light
		Delay500ms();
		P2=0xEF;//d1 light
		Delay500ms();
		P2=0xDF;//d2 light
		Delay500ms();
		P2=0xBF;//d1 light
		Delay500ms();
		P2=0x7F;//d2 light
		Delay500ms();
	}
}