#include <iostream>
#include <algorithm>

using namespace std;
const int MAX = 1e6 + 10;

int a, b, ans = 1, temp, n;
//struct node
//{
 //   int x, y;
//}P[MAX];     //结构体数组，存储每个活动开始时间结束时间 

bool cmp(node a, node b)    //按活动结束时间升序排列 
{
    return a.y < b.y;
}

int main()
{
   // printf("请输入活动数：");
//	scanf("%d", &n);
int n = 5;
//	 printf("请输入活动开始时间和结束时间\n");
  //  for (int i = 0; i < n; ++ i)       //录入活动开始时间结束时间 
    //{
	//	scanf("%d%d", &a,&b);
      int  P[5].x = {5,25,42,33,55};
       int P[5].y = {10,35,68,49,88};
    //}
    sort(P, P + n, cmp);     //按活动结束时间升序排列  
    temp = P[0].y;
    for (int i = 0; i < n; ++ i)    //贪心算法 
    {
        if (P[i].x > temp)        //若活动开始时间大于活动结束时间则把下一个活动结束时间赋给temp，并增加会场数 
        {
            temp = P[i].y;
            ++ ans;
            
            printf("%d",P[i].x);
        }
    }
    printf("最小会场数为：%d\n", ans);
    return 0;
}
