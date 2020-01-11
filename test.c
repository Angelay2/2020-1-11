#include <stdio.h>
#include <Windows.h>

// 移位运算一定是在CPU中运行，
// 不将原始数据写会我们的内存，最终是不会影响原数据的 比如 a + 10,
// 强转并没有改变其原始数据， 只是改变了 看待数据的方式
// 对指针解引用就是指针指向的目标, *p 放在表达式的左侧还是右侧是不一样的
// 整形提升 => 将字节增多
// 为什么会有整形提升？
// 要对数据进行计算 先需要把数据从内存拿到CPU，而CPU里是有寄存器的，当一字节的被转到寄存器中时，就自然地被转为4字节，祝所有的整形提升都是在运算中出现的
// 
int main1(){
	int a = 10;
	int b = 20;
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;

	printf("a = %d  b = %d\n", a, b);// a = 20 b = 10;
	system("pause");
	return 0;
}

// 操作符的属性
// 单目运算符优先级一般比较高
//  ++ -- 都比*高
 
// 操作符的优先级决定了先算谁再算谁的问题， 没有确定谁先被调用的问题
// 

int fun(){
	static int count = 1;
	return ++count;
}
int main2(){
	int answer;
	answer = fun() - fun() * fun() ;// a - b * c    2-3*4
	printf("%d\n", answer);// -10  
	system("pause");
	return 0;
}

int main3(){
	int i = 1;
	int ret = (++i) + (++i) + (++i);//  
	printf("%d\n", ret);// 12
	printf("%d\n", i);// 4
	system("pause");
	return 0;
}
// 为了快速提高效率
// 指针的大小在32位系统上为4字节 64位系统上为8字节
// char*类型的指针是为了存放char 类型的变量的地址
// 对指针使用完一定要置空,否则会造成野指针问题
// 对指针加1 是加其所指向类型的大小
int main(){
	int n = 10;
	char* pc = (char*)&n;// &n 的值 = pi 的值
	int* pi = &n;
	printf("%p\n", &n);// DC
	printf("%p\n", pc);// DC
	printf("%p\n", pi);// DC
	printf("%p\n", pi + 1);// E0  加了4
	printf("%p\n", pc + 1);// ED  加了10

	printf("%p\n", n);// A
	printf("%p\n", n + 1);// B




	system("pause");
	return 0;
}