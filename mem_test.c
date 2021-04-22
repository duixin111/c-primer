#include<stdio.h>

//1 自身类型有一个对齐值
//2 自定义类型有一个对齐值
//3 程序有一个指定的对齐值
//4 程序有一个有效的对齐值（最小值）



/*
typedef struct Test    //95%
{
	char a : 1;  //1 + 3    1
	int  b : 4;  //4        4
}Test;

void main()
{
	printf("%d\n", sizeof(Test));
}


/*
typedef struct Test
{
	char a : 2;  //开关  0 1  位域  位段 节省空间
	char b : 5;

	char c : 2;
}Test;

void main()
{
	printf("%d\n", sizeof(Test));
}

/*
typedef struct Test
{
	int a;
	double d;
	char c;
}Test;
void main()
{
	Test t;
	printf("%p\n", &t);

	Test* pt = &t;

	printf("%p\n", &(t.a));
	int* p = &(t.a);
}
/*
void main()
{
	Test t;

	printf("%d\n", (int)&(t.d) - (int)&(t.a));
}

/*

*/

/*
#pragma pack(4)
typedef struct Test
{
	int a;      //4
	struct tt
	{
		double b;  //8
		char c[10];//10 +2
		int d;     //4
	};
	long e;       //4   
}Test;  

void main()
{
	Test t; //本质 开辟空间
	printf("%d\n", sizeof(t));  //32
}

/*
//#pragma pack(4)
typedef struct Test
{
	short a;  //2 +2             8
	struct
	{
		int b;    //4
		double c; //8             24
		char d;   //1+3
	};
	long e; //4                    8
}Test;

void main()
{
	printf("%d\n", sizeof(Test)); //32  72  56  40
}


/*
typedef struct Test
{
	char a;   //1 + 7
	double b; //8
	int c;    //4 +4
}Test;

void main()
{
	printf("%d\n", sizeof(Test));
}
/*
#pragma pack(8)

typedef struct Test
{
	char a;   //1 + 1
	char b; //8
	char c;    //4
}Test;

void main()
{
	printf("%d\n", sizeof(Test));
}

/*
typedef struct Test
{
	char a;   //1 + 1
	double b; //8
	int c;    //4
}Test;

void main()
{
	printf("%d\n", sizeof(Test));
}
/*
struct tagTest1
{
	char d;
	long b;
	short a;
	
	long c;
};

void main()
{
	printf("%d\n", sizeof(tagTest1));
}

/*
#pragma pack(4)

typedef struct Test
{
	char a;   //1 + 1
	short b;  //2 
	int c;    //4
}Test;

void main()
{
	printf("%d\n", sizeof(Test));
}

/*
typedef struct Test
{
	char a;   //1 + 7
	double b; //8
	int c;    //4 + 4
}Test;

void main()
{
	printf("%d\n", sizeof(Test));
}


/*
struct A
{
	int a;
	short b;
	int c;
	char d;
};
struct B
{
	int a;
	char b;
	short c;
	short d;
};
int main()
{
	
	printf("%d", sizeof(A));
	printf("%d", sizeof(B));


	return 0;
}
/*
typedef struct Test
{
	//char m : 1;
	int a : 20;
	int b : 12;
	int c : 12;
	int d : 20;
}Test;
enum Test1
{
	ADD,
	DEV
}m;
int main()
{
	Test t;
	printf("%d", sizeof(t));
}
/*
#pragma pack(4)
typedef struct Test
{
	//char m : 1;
	int a;
	struct 
	{	double b;	
		char c[10];
		int d;
	};
	long e; 
	//8
	//int b;    //4
 	//char a;   //1
}Test;

int main()
{
	Test t ;
	printf("%d", sizeof(t));

	return 0;
}

*/