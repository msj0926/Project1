#include <stdio.h>// <> ���̺귯�� ��� ������ ������ �� ����մϴ� 
#include "Function.h" // ** ����� ���� ��� ������ ������ �� ����մϴ�.

//��ũ�ζ�?
/*
// ���α׷� ������ Ư���� �����Ͱ� ���ڿ��� ���ǵǰ� ó���Ǵ� �����Դϴ�.

//��ũ�δ� �ڷ����� �����Ƿ� �޸� ������ Ȯ������ �ʽ��ϴ�.
#define PI 3.14

// ��ũ�ο����� ;�� �ʿ����� �ʽ��ϴ�.

// ��ũ�� �Լ��� �ڷ����� �����Ƿ� �޸� ������ Ȯ������ �ʽ��ϴ�.
#define Solution(x,y) x *y 
*/

//����ü
struct character
{
	int health;
	float weight;
	const char* name;
	// ����ü�� �����ϱ� ���� ����ü�� 
	// �޸� ������ �������� �����Ƿ�
	// ����ü ���ο� �ִ� �����͸� �ʱ�ȭ�� �� �����ϴ�.

	
};


#define ANDROID 1
#define IOD 0


void main()
{
	// ��ó�����?
	/*
	// ���α׷��� �����ϵǱ� ������ ���α׷��� ���� ���� ó���ϴ� �����Դϴ�.
	
		int result = Function(10, 20);

		printf("result ������ �� : %d\n", result);

		// ��ũ�� ������ ����̰�, �޸� ������ ���� ������ ���� ������ �� �����ϴ�.
		// PI = 3.45;
	
		int a = 1;
		int b = 2;

		printf("PI�� �� : %f", PI);
		printf("SOlution �Լ��� ��� : %d\n", Solution(a,b));
		printf("SOlution �Լ��� ��� : %d\n", Solution(a+1,b+1));
		*/

		// ���Ǻ� ������ 
		/*
		// ���ǿ� ���� �ڵ��� ���� �κ��� ���������� �� ���� ������ �� �ֽ��ϴ�.
		// ���Ǻ� �������� #enfif�� ����ؼ� ������ �˴ϴ�.
		
#if IOS
		// pc�� �˸´� Ű �Է�
		printf("�ȵ���̵� ����Դϴ�");
#elif ANDROID
		// ����Ͽ� �˸´� Ű �Է�
		printf("�� ��° �����Դϴ�");
#else
			printf("2���� ������ �� Ʋ���ϴ�");
#endif

		//��ũ���� ����
		// ������ ������ �� ������� ���� �ʽ��ϴ�.
		*/

	// ����ü��?
	/*
	// ���� ���� ������ �ϳ��� �������� ����ȭ�� ���� �ϳ��� ��ü�� �����ϴ� ���Դϴ�.
	struct character leesin;
	leesin.health = 100;
	leesin.name = "leesin";
	leesin.weight = 80.5f;

	printf("leesin�� ü�� : %d\n", leesin.health);
	printf("leesin�� �̸� : %s\n", leesin.name);
	printf("leesin�� ������ : %f\n", leesin.weight);

	// ����ü�� �ʱ�ȭ�� ����Ʈ�� ����� ���� ����ü ������ ����� ������ ������ ���ǵǾ�� �մϴ�.
	struct character Alistar = {200,100.5f,"Alistar"};

	printf("Alistar�� ü�� : %d\n", Alistar.health);
	printf("Alistar�� �̸� : %s\n", Alistar.name);
	printf("Alistar�� ������ : %f\n", Alistar.weight);
	*/

	// ���׼�
	// �ڿ��� �߿��� �ڱ� �ڽ��� ������ ���� �����
	// ��� ������ �� �ڱ� �ڽź��� �� Ŀ���� ���̴�.

	//���׼��� �ƴմϴ�

	int value;
	int result = 0;

	scanf_s("%d", &value);

	for (int i = 1; i < value; i++)
	{
		if (value % i == 0)
		{
			result += i;
		}
	}

	if (result > value)
	{
		printf("���׼�");
	}
	else
	{
		printf ("���׼��� �ƴմϴ�");
	}
}