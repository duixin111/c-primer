#include <iostream>

#include <cstring>

using namespace std;

#define N 13

int main()

{

    int map[N][N]; //�ڽӾ���

    // ��ʼ�������ֵȫ��Ϊ0��ʾ���������û�б�����

    for( int i=0;i<=N-1;i++){

        for(int j = 0; j <= N-1; j++){

            map[i][j] = -1;

        }

    }



    int a,b,values;  //����a,b����������,values�洢Ȩֵ

    int v,l;  //�������ͱ���



    cout << "�����붥������";

    cin >> v;

    cout << "�����������";

    cin >> l;

    cout << "������ߣ�" << endl;



    for(i = 1; i <= l; i++){

            cin >> a >> b>> values;

            map[a][b] = values; // ��ʾ����aָ�򶥵�b�ı�,��ȨֵΪvalues

    }



    int k; //���ڼ������

    int ID[N],OD[N];  //������������Ⱥͳ���

int ve[N],vl[N];  //˳��������ȡ������������ȡС
 
    memset(ve,0,sizeof(ve));  //��ʼ��ve����ȫΪ0



    for(i = 1; i <= v; i++){  // �������

        k = 0;

        for(int j = 1; j <= v; j++){

            if(map[j][i] != -1) //�������j������i�бߣ��򶥵�i�����+1

                k++;

        }

        ID[i] = k;

    }

    for(i = 1; i <= v; i++){  //˳��������

        if(ID[i] == 0){

            for(int j = 1; j <= v; j++){

                if(map[i][j] != -1){     //�������j�붥��i�бߣ���ɾ�������ߣ����Ҷ���j�����-1

                    if(ve[j] < map[i][j] + ve[i])  //ȡ��ֵ

                        ve[j] = map[i][j] + ve[i];

                    ID[j]--;

                }

            }

        }

    }

    for(i = 1; i <= v; i++){  // �������

        k = 0;

        for(int j = 1; j <= v; j++){

            if(map[i][j] != -1)

                k++;

        }

        OD[i] = k;

    }



    k = v;

    for(i = 1; i <= v; i++)    //�� vl ����ȫ����ʼ��Ϊve���һ�����ֵ

       vl[i] = ve[k];



    for(i = k; i>=1; i--){  //����������

        if(OD[i] == 0){

            for(int j = 1; j <= v; j++){

                if(map[j][i] != -1){

                    if(vl[j] > vl[i] - map[j][i])   //ȡСֵ

                        vl[j] = vl[i] - map[j][i];

                    OD[j]--;

                }

            }

        }

    }

    cout << "****************************\n";

    cout << "Ve���飺";

    for(i = 1; i <= k; i++){

        cout << ve[i] << " ";

    }

    cout << endl;

    cout << "Vl���飺";
                                                      
    for(i = 1; i <= k; i++){

        cout << vl[i] << " ";

    }

    cout << "\n****************************\n";



    cout << "�ؼ�·����";
	
    for(i = 1; i <= k - 1; i++){


        if(ve[i] == vl[i]){


            cout << i << "->";

        }

    } 
	
	cout << k << endl;
	
	return 0;

}
