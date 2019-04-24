//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include<stdio.h>
//#include<stdlib.h>
//
//int main()
//{
//	int A, B, C, D, E;
//	for (A = 1; A <= 5; A++)
//	{
//		for (B = 1; B <= 5; B++)
//		{
//			for (C = 1; C <= 5; C++)
//			{
//				for (D = 1; D <= 5; D++)
//				{
//					for (E = 1; E <= 5; E++)
//					{
//						  /*A选手说：B第二，我第三；
//							B选手说：我第二，E第四；
//							C选手说：我第一，D第二；
//							D选手说：C最后，我第三；
//							E选手说：我第四，A第一；*/
//						if ((B == 2) + (A == 3) == 1 &&
//							(B == 2) + (E == 4) == 1 &&
//							(C == 1) + (D == 2) == 1 &&
//							(C == 5) + (D == 3) == 1 &&
//							(E == 4) + (A == 1) == 1 &&
//							A != B && A != C && A != D && A != E &&
//							B != C && B != D && B != E &&
//							C != D && C != E &&
//							D != E)
//						{
//							printf("A = %d\n", A);
//							printf("B = %d\n", B);
//							printf("C = %d\n", C);
//							printf("D = %d\n", D);
//							printf("E = %d\n", E);
//						}
//					}
//				}
//			}
//		}
//	}
//
//	system("pause");
//	return 0;
//}