#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#define Pi 3.14
main()
  {
    int R_0;
    float Area;
    clrscr();
    printf("�ணࠬ�� ������ ���頤� ���㦭��� �� ࠤ���� \n \n");
    printf("������ ࠤ��� : ");
    scanf("%d", &R_0);
    Area = Pi * R_0 * R_0;
    printf("���頤� ��㣠  : ");
    printf("%0.2f", Area);
    getch();
  }
