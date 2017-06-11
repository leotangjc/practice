/*使用全局变量模拟价格调整*/
#include <stdio.h>

int iGlobalPrice=100;

void Store1price();
void Store2price();
void Store3price();
void ChangePrice();

int main()
{
    
    /*先显示价格改变之前所有连锁店的价格*/
    printf("the chain store's orifinal price is :%d\n",iGlobalPrice);
    Store1price();
    Store2price();
    Store3price();

    /*调用函数，改变连锁店的价格*/
    ChangePrice();
    /*显示提示，显示修改后的价格*/
    printf("the chain store's present price is :%d\n",iGlobalPrice);
    Store1price();
    Store2price();
    Store3price();
    return 0;
}
/*定义1号连锁店的价格函数*/
void Store1price()
{
    printf("trore1's price is :%d\n",iGlobalPrice);
}
/*定义2号连锁店的价格函数*/
void Store2price()
{
    printf("trore2's price is :%d\n",iGlobalPrice);
}
/*定义3号连锁店的价格函数*/
void Store3price()
{
    printf("trore3's price is :%d\n",iGlobalPrice);
}
/*定义更改连锁店价格函数*/
void ChangePrice()
{
    printf("What price do you want tu change? the price is:");
    scanf("%d",&iGlobalPrice);
}
