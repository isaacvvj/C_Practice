#include<stdio.h>

int main() {
	//定义变量
	int price = 0;//商品价格
	int cash = 0;//支付金额
	int change = 0;//找零价格
	//输入与输出价格
	printf("请输入商品价格（元）：");
	scanf("%d",&price);//输入整数存入price里
	
	printf("请输入支付金额（元）");
	scanf("%d",&cash);
	//计算逻辑
	change = cash - price;//计算
	//输出结果
	printf("应找您零钱:%d元\n",change);
	
	return 0;
}
