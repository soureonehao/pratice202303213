#include<stdio.h>
void main() {
	int i = 0, j = 0;	//���������ͳ������������ͨ������
	float one, tow,average;	//�������
	int select;
	while(1){
		printf("���������ſεĳɼ�");
		scanf_s("%f %f", &one, &tow);
		average = (one + tow) / 2;
		if (average >= 85.0) {
			printf("��ѧ���ɼ�����,����ͨ����");	//�ж���䣬�ж��Ƿ�����
			i++;
		}
		else if (average >= 60.0 && average < 85.0) {
			printf("��ѧ���ɼ��ϸ񣬸���ͨ��!");
			j++;
		}
		else {
			printf("���ϸ񣬻�ȥ���ޣ�");
		}
		printf("�Ƿ������������ѡ1�����������֣�");	//�ж���䣻ѡ���Ƿ��������
			scanf_s("%d", &select);
			if (select == 1) {
				continue;
			}
			else {
				printf("ллʹ��!");
				break;
			}
	}
	printf("�����ѧ����%d����ͨ����ѧ����%d��", i, j);
}