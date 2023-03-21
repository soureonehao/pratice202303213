#include<stdio.h>
void main() {
	int i = 0, j = 0;	//定义变量，统计优秀人数和通过人数
	float one, tow,average;	//定义变量
	int select;
	while(1){
		printf("请输入两门课的成绩");
		scanf_s("%f %f", &one, &tow);
		average = (one + tow) / 2;
		if (average >= 85.0) {
			printf("该学生成绩优秀,给予通过！");	//判断语句，判断是否优秀
			i++;
		}
		else if (average >= 60.0 && average < 85.0) {
			printf("该学生成绩合格，给予通过!");
			j++;
		}
		else {
			printf("不合格，回去重修！");
		}
		printf("是否继续测评，是选1，否其他数字！");	//判断语句；选择是否继续测评
			scanf_s("%d", &select);
			if (select == 1) {
				continue;
			}
			else {
				printf("谢谢使用!");
				break;
			}
	}
	printf("优秀的学生有%d个，通过的学生有%d个", i, j);
}