//����������� ���� 0.3
/*
 * �������� ��������� ������������:
	1.�����������:
	��������� ������� ���� 12.5 + 32.56.
	����������� ����� (��������: +, -,*,/).
	2.���������:
	��������� ������������ ������� ���� 2.5 + 32 *5.1 =
	����������� ����� (��� ����� ����������� ��������).
	������������ ������� ��������� ��� ����� ������� ������������� ���������� ���������� (��������, � ���������� �������) 
	����� ����� ������� ����� �������� (����� ����, ����� �������)
	3.���������� �����������:
	��������� ������������ ������� ���� 2.5 + 32 *5.1 =
	����������� ����� � ������ ����������� ��������(������� �� �������� ������)
	4.����������������
	��������� ������������ ������� ���� 3*(7+(2.5 + 32) *(5.1-2))=
	����������� ����� � ������ ����������� �������� � ����������� ������
 */
//#include<stdio.h>
//#include<locale.h>
//
//// ������� ������������
//// ����������� ������� �������� ������ ��������������� �� ��������� �����
//double calculate(int *, char *);			
//
//int main()
//{
//	double a;			// �������� ����������� ��������
//	char op1;
//
//	int err;
//
//	setlocale(LC_CTYPE, "rus");
//
//	printf("������� �������:\n");
//	//---------------------------------------------------
//	err = 0;
//	a = calculate(&err, &op1);
//	//---------------------------------------------------
////finish:
//	if (!err)
//		printf("%lg\n", a);
//	else
//		printf("%c - ����������� ��������\n", op1);
//}
//
//
//double calculate(int *err, char *errSimbol)			// ������� ������������
//{
//	double a, b, c, d;
//	char op1, op2, op3, op4;
//
//	for (a = 0. , op1 = '+'; op1 != '='; op1 = op2) // for_1
//	{
//		//for (scanf_s("%c", &op4, sizeof(char)); op4 == '(' || op4 == ')'; ) // for_3
//		if (op1 == ')') return a;
//		else {
//			scanf_s("%c", &op4, sizeof(char));
//
//			{
//				switch (op4)
//				{
//				case '(': a = calculate(err, errSimbol); //
//					scanf_s("%c", &op1, sizeof(char));
//					if (op1 == '=') return a;
//					ungetc(op4, stdin);
//					break;
//				case ')': return a; //
//					//break;
//				case '=': return a; //
//				default: ungetc(op4, stdin); //*errSimbol = 1; goto finish;
//				} // for_3
//			}
//		}
//		for (scanf_s("%lg %c", &b, &op2, sizeof(char)); op2 == '*' || op2 == '/'; op2 = op3) // for_2
//		{
//			scanf_s("%lg %c", &c, &op3, sizeof(char));
//			switch (op2)
//			{
//			case '*': b *= c;
//				break;
//			case '/': b /= c;
//				break;
//				default: *errSimbol = 1; //goto finish;
//			}
//		} // for_2
//		switch (op1)
//		{
//		case '+': a += b;
//			break;
//		case '-': a -= b;
//			break;
//			default: *errSimbol = 1; //goto finish;
//		}
//	} // for_1
//	return a;
//}
