#include <stdio.h>
#include <Windows.h>

// ��λ����һ������CPU�����У�
// ����ԭʼ����д�����ǵ��ڴ棬�����ǲ���Ӱ��ԭ���ݵ� ���� a + 10,
// ǿת��û�иı���ԭʼ���ݣ� ֻ�Ǹı��� �������ݵķ�ʽ
// ��ָ������þ���ָ��ָ���Ŀ��, *p ���ڱ��ʽ����໹���Ҳ��ǲ�һ����
// �������� => ���ֽ�����
// Ϊʲô��������������
// Ҫ�����ݽ��м��� ����Ҫ�����ݴ��ڴ��õ�CPU����CPU�����мĴ����ģ���һ�ֽڵı�ת���Ĵ�����ʱ������Ȼ�ر�תΪ4�ֽڣ�ף���е��������������������г��ֵ�
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

// ������������
// ��Ŀ��������ȼ�һ��Ƚϸ�
//  ++ -- ����*��
 
// �����������ȼ�����������˭����˭�����⣬ û��ȷ��˭�ȱ����õ�����
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
// Ϊ�˿������Ч��
// ָ��Ĵ�С��32λϵͳ��Ϊ4�ֽ� 64λϵͳ��Ϊ8�ֽ�
// char*���͵�ָ����Ϊ�˴��char ���͵ı����ĵ�ַ
// ��ָ��ʹ����һ��Ҫ�ÿ�,��������Ұָ������
// ��ָ���1 �Ǽ�����ָ�����͵Ĵ�С
int main(){
	int n = 10;
	char* pc = (char*)&n;// &n ��ֵ = pi ��ֵ
	int* pi = &n;
	printf("%p\n", &n);// DC
	printf("%p\n", pc);// DC
	printf("%p\n", pi);// DC
	printf("%p\n", pi + 1);// E0  ����4
	printf("%p\n", pc + 1);// ED  ����10

	printf("%p\n", n);// A
	printf("%p\n", n + 1);// B




	system("pause");
	return 0;
}