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
//延迟判定
void main()
{
	while(1)
	{
		if(P3_1==0/*按键k1*/)
		{
			Delay1ms(20);//延迟20秒判定
			while(P3_1==0);//直到按键k1被按下
			Delay1ms(20);//延迟20秒判定
			P2_0=~P2_0;//LED1的状态取反
		}
	}
}