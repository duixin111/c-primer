#include <iostream>
#include <algorithm>

using namespace std;
const int MAX = 1e6 + 10;

int a, b, ans = 1, temp, n;
//struct node
//{
 //   int x, y;
//}P[MAX];     //�ṹ�����飬�洢ÿ�����ʼʱ�����ʱ�� 

bool cmp(node a, node b)    //�������ʱ���������� 
{
    return a.y < b.y;
}

int main()
{
   // printf("����������");
//	scanf("%d", &n);
int n = 5;
//	 printf("��������ʼʱ��ͽ���ʱ��\n");
  //  for (int i = 0; i < n; ++ i)       //¼����ʼʱ�����ʱ�� 
    //{
	//	scanf("%d%d", &a,&b);
      int  P[5].x = {5,25,42,33,55};
       int P[5].y = {10,35,68,49,88};
    //}
    sort(P, P + n, cmp);     //�������ʱ����������  
    temp = P[0].y;
    for (int i = 0; i < n; ++ i)    //̰���㷨 
    {
        if (P[i].x > temp)        //�����ʼʱ����ڻ����ʱ�������һ�������ʱ�丳��temp�������ӻ᳡�� 
        {
            temp = P[i].y;
            ++ ans;
            
            printf("%d",P[i].x);
        }
    }
    printf("��С�᳡��Ϊ��%d\n", ans);
    return 0;
}
