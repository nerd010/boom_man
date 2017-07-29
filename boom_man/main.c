//
//  main.c
//  boom_man
//
//  Created by Charles Wang on 16/3/13.
//  Copyright © 2016年 CHW. All rights reserved.
//

#include <stdio.h>

int main(void)
{
    char a[20][21];
    
    int i, j, sum, map = 0, p, q, x, y, n, m;
    
//    printf("请输入你要的地图大小(x,y):\n");
    //%d,%d 输入时用","隔开；%d %d 输入时用“ ”。
    scanf("%d,%d\n", &n, &m);
    
    
//    printf("请输入每一行的字符\n");
    for (i = 0; i < n; i++)
    {
        scanf("%s", a[i]);
    }
    
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (a[i][j] == '.')
            {
                //sum: 记录消灭的敌人数
                sum = 0;
                
                //向上
                x = i;
                y = j;
                while (a[x][y] != '#')
                {
                    if (a[x][y] == 'G')
                    {
                        sum++;
                    }
                    x--;
                }
                
                //向下
                x = i;
                y = j;
                while (a[x][y] != '#')
                {
                    if (a[x][y] == 'G')
                    {
                        sum++;
                    }
                    x++;
                }
                
                //向左
                x = i;
                y = j;
                while (a[x][y] != '#')
                {
                    if (a[x][y] == 'G')
                    {
                        sum++;
                    }
                    y--;
                }
                
                //向右
                x = i;
                y = j;
                while (a[x][y] != '#')
                {
                    if (a[x][y] == 'G')
                    {
                        sum++;
                    }
                    y++;
                }
                
                if (sum > map)
                {
                    map = sum;
                    p = i;
                    q = j;
                }
            }
        }
    }
    
    printf("将炸弹放置在（%d,%d）,最多可以消灭%d个敌人\n", p, q, map);
    getchar();getchar();
    return 0;
}
